jQuery(document).ready(function(){
    
    var win_width = $(window).width();
    var standardMenu = $("#menu-wrapper").html();
   
    if (win_width > 959) {
        $('ul.sf-menu').superfish();
    } else {
        $("#myMenu1List").removeAttr('class');
        $("#myMenu1List > li:first-child > a").text('Home');
        $('#myMenu1').mmenu({
            slidingSubmenus: false,
            classes: "mm-light",
            position: 'left',
            searchfield: true
        })
    }

	// HTTPS - Direct non HTTPS links to HTTP if on HTTPS
	if (window.location.protocol == 'https:'){
		$('a').not('[href^="http"],[href^="https"],[href^="mailto:"],[href^="#"]').each(function(){
			var ancLink = this.href; ancLink = ancLink.replace('https://mtia.worldsecuresystems.com','http://www.mtia.org.au'); this.href = ancLink;
		});
	}

	// HTTPS - Direct payment pages to HTTPS
	var securePages = new Array("/registration-level-1","/registration-level-2","/2015-teacher-development-retreat-further-payment","/2015-tdr-registration-and-deposit","/2015-intensive-registration-and-deposit","/2015-intensive-further-payment","/level-i-study-module","/level-ii-study-module");
	var currentPage = window.location.pathname;
	var secureURL = 'https://mtia.worldsecuresystems.com';

	if (window.location.protocol == 'http:'){
		if($.inArray(currentPage, securePages) != -1){
			window.location.href = secureURL + currentPage;
		}
	} else if (window.location.protocol == 'https:' && window.location.hash != '#mtia'){
		if($.inArray(currentPage, securePages) != -1){
			window.location.hash=('#mtia');
			window.location.reload();
		}
	}

	// Side Menu - Add selected class to active menu item
	$('.side-menu'+' a').each(function(){
		linkUrl = $(this).attr('href');		
		if (window.location.protocol !== 'https:'){
			if ( window.location.pathname == linkUrl){
				$(this).addClass('selected');
			}
		} else {
			if ( window.location == linkUrl){
				$(this).addClass('selected');
			}
		}
	});

	// Main Menu - Kill functionality on dummy links
	$('#menu-wrapper a').click(function(e) {
		var linkVal = $(this).attr('href');
		if (linkVal == '#') {
			e.preventDefault();
		}
	});

	// Payment Form - Item Purchased	
	if ($('.payment-form').length){
		var itemPurchased = $('h1:first').text();
		$('#CAT_Custom_19994004').val(itemPurchased);		
	}

    $(window).load(function(){
        $("body img").each(function(){ 
            var image = $(this); 
            if(image.context.naturalWidth == 0 || image.readyState == 'uninitialized'){  
                $(image).unbind("error").hide();
            } 
        });
    });   

 })