{% if globals.user.isLoggedIn == 'true' %}
	{module_webapps render="collection" id="Event Bookings" filter="classified" itemId="50990" targetFrame="" resultsPerPage="" hideEmptyMessage="false" rowCount="" sortType="" collection="eventBookings" template=""}
	{% for eventBookingsContent in eventBookings.items %}
		{% if eventBookings.items -%}
			<div class="event-list clear">
				{% if eventBookingsContent['Small Image'] != "" -%}
					<a href="https://mtia.worldsecuresystems.com{{eventBookingsContent.url}}" title="{{eventBookingsContent.name}}"><img src="{{eventBookingsContent.['Small Image']}}" title="{{eventBookingsContent.name}}" alt="{{eventBookingsContent.name}}" height="126" width="126" border="0" /></a>
				{% endif -%}
				<div class="event-list-details">
					<h2>{{eventBookingsContent.name}}</h2>
					{% if eventBookingsContent['Price'] != "" -%}
						<p><strong>Cost:</strong> {% if eventBookingsContent['Registration Open'] != "No" -%}${% endif -%}{{eventBookingsContent.['Price']}}</p>
					{% endif -%}
					{% if eventBookingsContent['Dates'] != "" -%}
						<p><strong>Dates:</strong> {{eventBookingsContent.['Dates']}}</p>
					{% endif -%}
					<a href="https://mtia.worldsecuresystems.com{{eventBookingsContent.url}}" class="btn btn-primary" title="View event">View Event</a>
				</div>			
			</div>
		{% endif -%}
	{% endfor -%}
	<br /><br /><br />
{% else -%}
	<p><strong>The purchase of intensive courses is limited to course attendees and not available to the general public.<br />If you're a course attendee please login below.</strong></p>
	<div class="secure-login secure-login-horizontal">
		<form name="catseczoneform52478" onSubmit="return checkWholeForm52478(this)" method="post" action="https://mtia.worldsecuresystems.com/ZoneProcess.aspx?ZoneID=-1&amp;Referrer={module_siteUrl,true,true}&amp;OID={module_oid}&amp;OTYPE={module_otype}">
			<div class="form row">
				<div class="item col-lg-12">
					<label for="SZUsername">Username</label><br />
					<input class="form-control" type="text" name="Username" id="SZUsername" maxlength="255" />
				</div>
				<div class="item col-lg-12">
					<label for="SZPassword">Password</label><br />
					<input class="form-control" type="password" name="Password" id="SZPassword" maxlength="255" autocomplete="off" />
				</div>
				<div class="item col-lg-12">
					<input type="checkbox" name="RememberMe" id="RememberMe" />
					<label for="RememberMe">Remember Me</label>
				</div>
				<div class="item col-lg-12">
					<input class="btn btn-primary" type="submit" value="Log in" />
					&nbsp;<a href="/_System/SystemPages/PasswordRetrieveRequest" class="lost-password">Lost password?</a>
				</div>
			</div>
			<script type="text/javascript" src="/CatalystScripts/ValidationFunctions.js"></script> 
			<script type="text/javascript">
			//<![CDATA[
			function checkWholeForm52478(theForm){var why = "";if (theForm.Username) why += isEmpty(theForm.Username.value, "Username");if (theForm.Password) why += isEmpty(theForm.Password.value, "Password");if (why != ""){alert(why);return false;}theForm.submit();return false;}
			//]]>
			</script>
		</form>
	</div>
{% endif -%}