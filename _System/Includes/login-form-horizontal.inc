<div class="secure-login secure-login-horizontal">
	<form name="catseczoneform52478" onSubmit="return checkWholeForm52478(this)" method="post" action="https://mtia.worldsecuresystems.com/ZoneProcess.aspx?ZoneID=-1&amp;Referrer={module_siteUrl,true,true}&amp;OID={module_oid}&amp;OTYPE={module_otype}#event-booking-form">
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
		function checkWholeForm52478(theForm){
			var why = "";
			if (theForm.Username) why += isEmpty(theForm.Username.value, "Username");
			if (theForm.Password) why += isEmpty(theForm.Password.value, "Password");
			if (why != ""){
				alert(why);
				return false;
			}
			theForm.submit();
			return false;
		}
		//]]>
		</script>
	</form>
</div>
