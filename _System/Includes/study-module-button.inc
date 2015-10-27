{% if globals.user.isLoggedIn == 'true' %}
	<form name="catwebformform32231" method="post" onsubmit="return checkWholeForm32231(this)" enctype="multipart/form-data" action="https://mtia.worldsecuresystems.com/FormProcessv2.aspx?WebFormID=98858&OID={module_oid}&OTYPE={module_otype}&EID={module_eid}&CID={module_cid}&CC={module_urlcountrycode}&Referrer={module_siteurl,true,true}&SendInvoice=true" class="form-style payment-form">
		<h3>Purchase Study Module</h3>
		<div class="form row">
			<div class="item col-lg-24">
				<p><strong>Your Details</strong></p>
			</div>
			<div class="item col-lg-12">
				<label for="FullName">Full Name <span class="req">*</span></label><br />
				<input type="text" name="FullName" id="FullName" class="cat_textbox" maxlength="255" required />
			</div>
			<div class="item col-lg-12">
				<label for="EmailAddress">Email Address <span class="req">*</span></label><br />
				<input type="text" name="EmailAddress" id="EmailAddress" class="cat_textbox" maxlength="255"required  />
			</div>
			<div class="item col-lg-12">
				<label for="HomePhone">Phone Number <span class="req">*</span></label><br />
				<input type="text" name="HomePhone" id="HomePhone" class="cat_textbox" maxlength="255" />
			</div>
			<div class="item col-lg-24">
				<p><strong>Billing Details</strong></p>
			</div>
			<div class="item col-lg-12">
				<label for="BillingAddress">Billing Address <span class="req">*</span></label><br />
				<input type="text" name="BillingAddress" id="BillingAddress" class="cat_textbox" maxlength="500" required />
			</div>
			<div class="item col-lg-12">
				<label for="BillingCity">City <span class="req">*</span></label><br />
				<input type="text" name="BillingCity" id="BillingCity" class="cat_textbox" maxlength="255" required />
			</div>
			<div class="item col-lg-12">
				<label for="BillingState">State <span class="req">*</span></label><br />
				<input type="text" name="BillingState" id="BillingState" class="cat_textbox" maxlength="255" required />
			</div>
			<div class="item col-lg-12">
				<label for="BillingZip">Postcode <span class="req">*</span></label><br />
				<input type="text" name="BillingZip" id="BillingZip" class="cat_textbox" maxlength="255" required />
			</div>
			<div class="item col-lg-12">
				<label for="BillingCountry">Country <span class="req">*</span></label><br />
				<select name="BillingCountry" id="BillingCountry" class="cat_dropdown" required>
					<option value=" ">-- Select Country --</option>
					<option value="AF">AFGHANISTAN</option>
					<option value="AX">ALAND ISLANDS</option>
					<option value="AL">ALBANIA</option>
					<option value="DZ">ALGERIA</option>
					<option value="AS">AMERICAN SAMOA</option>
					<option value="AD">ANDORRA</option>
					<option value="AO">ANGOLA</option>
					<option value="AI">ANGUILLA</option>
					<option value="AQ">ANTARCTICA</option>
					<option value="AG">ANTIGUA AND BARBUDA</option>
					<option value="AR">ARGENTINA</option>
					<option value="AM">ARMENIA</option>
					<option value="AW">ARUBA</option>
					<option value="AU" selected="selected">AUSTRALIA</option>
					<option value="AT">AUSTRIA</option>
					<option value="AZ">AZERBAIJAN</option>
					<option value="BS">BAHAMAS</option>
					<option value="BH">BAHRAIN</option>
					<option value="BD">BANGLADESH</option>
					<option value="BB">BARBADOS</option>
					<option value="BY">BELARUS</option>
					<option value="BE">BELGIUM</option>
					<option value="BZ">BELIZE</option>
					<option value="BJ">BENIN</option>
					<option value="BM">BERMUDA</option>
					<option value="BT">BHUTAN</option>
					<option value="BO">BOLIVIA</option>
					<option value="BA">BOSNIA AND HERZEGOVINA</option>
					<option value="BW">BOTSWANA</option>
					<option value="BV">BOUVET ISLAND</option>
					<option value="BR">BRAZIL</option>
					<option value="IO">BRITISH INDIAN OCEAN TERRITORY</option>
					<option value="BN">BRUNEI DARUSSALAM</option>
					<option value="BG">BULGARIA</option>
					<option value="BF">BURKINA FASO</option>
					<option value="BI">BURUNDI</option>
					<option value="KH">CAMBODIA</option>
					<option value="CM">CAMEROON</option>
					<option value="CA">CANADA</option>
					<option value="CV">CAPE VERDE</option>
					<option value="KY">CAYMAN ISLANDS</option>
					<option value="CF">CENTRAL AFRICAN REPUBLIC</option>
					<option value="TD">CHAD</option>
					<option value="CL">CHILE</option>
					<option value="CN">CHINA</option>
					<option value="CX">CHRISTMAS ISLAND</option>
					<option value="CC">COCOS (KEELING) ISLANDS</option>
					<option value="CO">COLOMBIA</option>
					<option value="KM">COMOROS</option>
					<option value="CG">CONGO</option>
					<option value="CD">CONGO, THE DEMOCRATIC REPUBLIC OF THE</option>
					<option value="CK">COOK ISLANDS</option>
					<option value="CR">COSTA RICA</option>
					<option value="CI">CÔTE D'IVOIRE</option>
					<option value="HR">CROATIA</option>
					<option value="CU">CUBA</option>
					<option value="CY">CYPRUS</option>
					<option value="CZ">CZECH REPUBLIC</option>
					<option value="DK">DENMARK</option>
					<option value="DJ">DJIBOUTI</option>
					<option value="DM">DOMINICA</option>
					<option value="DO">DOMINICAN REPUBLIC</option>
					<option value="EC">ECUADOR</option>
					<option value="EG">EGYPT</option>
					<option value="SV">EL SALVADOR</option>
					<option value="GQ">EQUATORIAL GUINEA</option>
					<option value="ER">ERITREA</option>
					<option value="EE">ESTONIA</option>
					<option value="ET">ETHIOPIA</option>
					<option value="FK">FALKLAND ISLANDS (MALVINAS)</option>
					<option value="FO">FAROE ISLANDS</option>
					<option value="FJ">FIJI</option>
					<option value="FI">FINLAND</option>
					<option value="FR">FRANCE</option>
					<option value="GF">FRENCH GUIANA</option>
					<option value="PF">FRENCH POLYNESIA</option>
					<option value="TF">FRENCH SOUTHERN TERRITORIES</option>
					<option value="GA">GABON</option>
					<option value="GM">GAMBIA</option>
					<option value="GE">GEORGIA</option>
					<option value="DE">GERMANY</option>
					<option value="GH">GHANA</option>
					<option value="GI">GIBRALTAR</option>
					<option value="GR">GREECE</option>
					<option value="GL">GREENLAND</option>
					<option value="GD">GRENADA</option>
					<option value="GP">GUADELOUPE</option>
					<option value="GU">GUAM</option>
					<option value="GT">GUATEMALA</option>
					<option value="GG">GUERNSEY</option>
					<option value="GN">GUINEA</option>
					<option value="GW">GUINEA-BISSAU</option>
					<option value="GY">GUYANA</option>
					<option value="HT">HAITI</option>
					<option value="HM">HEARD ISLAND AND MCDONALD ISLANDS</option>
					<option value="VA">HOLY SEE (VATICAN CITY STATE)</option>
					<option value="HN">HONDURAS</option>
					<option value="HK">HONG KONG</option>
					<option value="HU">HUNGARY</option>
					<option value="IS">ICELAND</option>
					<option value="IN">INDIA</option>
					<option value="ID">INDONESIA</option>
					<option value="IR">IRAN, ISLAMIC REPUBLIC OF</option>
					<option value="IQ">IRAQ</option>
					<option value="IE">IRELAND</option>
					<option value="IL">ISRAEL</option>
					<option value="IT">ITALY</option>
					<option value="JM">JAMAICA</option>
					<option value="JP">JAPAN</option>
					<option value="JE">JERSEY</option>
					<option value="JO">JORDAN</option>
					<option value="KZ">KAZAKHSTAN</option>
					<option value="KE">KENYA</option>
					<option value="KI">KIRIBATI</option>
					<option value="KP">KOREA, DEMOCRATIC PEOPLE'S REPUBLIC OF</option>
					<option value="KR">KOREA, REPUBLIC OF</option>
					<option value="KW">KUWAIT</option>
					<option value="KG">KYRGYZSTAN</option>
					<option value="LA">LAO PEOPLE'S DEMOCRATIC REPUBLIC</option>
					<option value="LV">LATVIA</option>
					<option value="LB">LEBANON</option>
					<option value="LS">LESOTHO</option>
					<option value="LR">LIBERIA</option>
					<option value="LY">LIBYAN ARAB JAMAHIRIYA</option>
					<option value="LI">LIECHTENSTEIN</option>
					<option value="LT">LITHUANIA</option>
					<option value="LU">LUXEMBOURG</option>
					<option value="MO">MACAO</option>
					<option value="MK">MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF</option>
					<option value="MG">MADAGASCAR</option>
					<option value="MW">MALAWI</option>
					<option value="MY">MALAYSIA</option>
					<option value="MV">MALDIVES</option>
					<option value="ML">MALI</option>
					<option value="MT">MALTA</option>
					<option value="MH">MARSHALL ISLANDS</option>
					<option value="MQ">MARTINIQUE</option>
					<option value="MR">MAURITANIA</option>
					<option value="MU">MAURITIUS</option>
					<option value="YT">MAYOTTE</option>
					<option value="MX">MEXICO</option>
					<option value="FM">MICRONESIA, FEDERATED STATES OF</option>
					<option value="MD">MOLDOVA, REPUBLIC OF</option>
					<option value="MC">MONACO</option>
					<option value="MN">MONGOLIA</option>
					<option value="ME">MONTENEGRO</option>
					<option value="MS">MONTSERRAT</option>
					<option value="MA">MOROCCO</option>
					<option value="MZ">MOZAMBIQUE</option>
					<option value="MM">MYANMAR</option>
					<option value="NA">NAMIBIA</option>
					<option value="NR">NAURU</option>
					<option value="NP">NEPAL</option>
					<option value="NL">NETHERLANDS</option>
					<option value="AN">NETHERLANDS ANTILLES</option>
					<option value="NC">NEW CALEDONIA</option>
					<option value="NZ">NEW ZEALAND</option>
					<option value="NI">NICARAGUA</option>
					<option value="NE">NIGER</option>
					<option value="NG">NIGERIA</option>
					<option value="NU">NIUE</option>
					<option value="NF">NORFOLK ISLAND</option>
					<option value="MP">NORTHERN MARIANA ISLANDS</option>
					<option value="NO">NORWAY</option>
					<option value="OM">OMAN</option>
					<option value="PK">PAKISTAN</option>
					<option value="PW">PALAU</option>
					<option value="PS">PALESTINIAN TERRITORY, OCCUPIED</option>
					<option value="PA">PANAMA</option>
					<option value="PG">PAPUA NEW GUINEA</option>
					<option value="PY">PARAGUAY</option>
					<option value="PE">PERU</option>
					<option value="PH">PHILIPPINES</option>
					<option value="PN">PITCAIRN</option>
					<option value="PL">POLAND</option>
					<option value="PT">PORTUGAL</option>
					<option value="PR">PUERTO RICO</option>
					<option value="QA">QATAR</option>
					<option value="RE">REUNION</option>
					<option value="RO">ROMANIA</option>
					<option value="RU">RUSSIAN FEDERATION</option>
					<option value="RW">RWANDA</option>
					<option value="BL">SAINT BARTHÉLEMY</option>
					<option value="SH">SAINT HELENA</option>
					<option value="KN">SAINT KITTS AND NEVIS</option>
					<option value="LC">SAINT LUCIA</option>
					<option value="MF">SAINT MARTIN</option>
					<option value="PM">SAINT PIERRE AND MIQUELON</option>
					<option value="VC">SAINT VINCENT AND THE GRENADINES</option>
					<option value="WS">SAMOA</option>
					<option value="SM">SAN MARINO</option>
					<option value="ST">SAO TOME AND PRINCIPE</option>
					<option value="SA">SAUDI ARABIA</option>
					<option value="SN">SENEGAL</option>
					<option value="RS">SERBIA</option>
					<option value="CS">SERBIA AND MONTENEGRO</option>
					<option value="SC">SEYCHELLES</option>
					<option value="SL">SIERRA LEONE</option>
					<option value="SG">SINGAPORE</option>
					<option value="SK">SLOVAKIA</option>
					<option value="SI">SLOVENIA</option>
					<option value="SB">SOLOMON ISLANDS</option>
					<option value="SO">SOMALIA</option>
					<option value="ZA">SOUTH AFRICA</option>
					<option value="GS">SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS</option>
					<option value="ES">SPAIN</option>
					<option value="LK">SRI LANKA</option>
					<option value="SD">SUDAN</option>
					<option value="SR">SURINAME</option>
					<option value="SJ">SVALBARD AND JAN MAYEN</option>
					<option value="SZ">SWAZILAND</option>
					<option value="SE">SWEDEN</option>
					<option value="CH">SWITZERLAND</option>
					<option value="SY">SYRIAN ARAB REPUBLIC</option>
					<option value="TW">TAIWAN</option>
					<option value="TJ">TAJIKISTAN</option>
					<option value="TZ">TANZANIA, UNITED REPUBLIC OF</option>
					<option value="TH">THAILAND</option>
					<option value="TL">TIMOR-LESTE</option>
					<option value="TG">TOGO</option>
					<option value="TK">TOKELAU</option>
					<option value="TO">TONGA</option>
					<option value="TT">TRINIDAD AND TOBAGO</option>
					<option value="TN">TUNISIA</option>
					<option value="TR">TURKEY</option>
					<option value="TM">TURKMENISTAN</option>
					<option value="TC">TURKS AND CAICOS ISLANDS</option>
					<option value="TV">TUVALU</option>
					<option value="UG">UGANDA</option>
					<option value="UA">UKRAINE</option>
					<option value="AE">UNITED ARAB EMIRATES</option>
					<option value="GB">UNITED KINGDOM</option>
					<option value="US">UNITED STATES</option>
					<option value="UM">UNITED STATES MINOR OUTLYING ISLANDS</option>
					<option value="UY">URUGUAY</option>
					<option value="UZ">UZBEKISTAN</option>
					<option value="VU">VANUATU</option>
					<option value="VE">VENEZUELA</option>
					<option value="VN">VIETNAM</option>
					<option value="VG">VIRGIN ISLANDS, BRITISH</option>
					<option value="VI">VIRGIN ISLANDS, U.S.</option>
					<option value="WF">WALLIS AND FUTUNA</option>
					<option value="EH">WESTERN SAHARA</option>
					<option value="YE">YEMEN</option>
					<option value="ZM">ZAMBIA</option>
					<option value="ZW">ZIMBABWE</option>
				</select>
			</div>
			<div class="item col-lg-24">
				<p><strong>Payment Details</strong></p>
			</div>
			<div class="item col-lg-12">
				<label for="CardName">Name on Card <span class="req">*</span></label><br />
				<input type="text" name="CardName" id="CardName" class="cat_textbox" autocomplete="off" required />
			</div>
			<div class="item col-lg-12">
				<label for="CardNumber">Card Number <span class="req">*</span></label><br />
				<input type="text" name="CardNumber" id="CardNumber" class="cat_textbox" autocomplete="off" required />
			</div>
			<div class="item col-lg-12">
				<label>Card Expiry <span class="req">*</span></label><br />
				<select name="CardExpiryMonth" id="CardExpiryMonth" class="cat_dropdown_smaller" required>
					<option value="01">01</option>
					<option value="02">02</option>
					<option value="03">03</option>
					<option value="04">04</option>
					<option value="05">05</option>
					<option value="06">06</option>
					<option value="07">07</option>
					<option value="08">08</option>
					<option value="09">09</option>
					<option value="10">10</option>
					<option value="11">11</option>
					<option value="12">12</option>
				</select>
				<select name="CardExpiryYear" id="CardExpiryYear" class="cat_dropdown_smaller">
					<option value="2015">2015</option>
					<option value="2016">2016</option>
					<option value="2017">2017</option>
					<option value="2018">2018</option>
					<option value="2019">2019</option>
					<option value="2020">2020</option>
					<option value="2021">2021</option>
					<option value="2022">2022</option>
					<option value="2023">2023</option>
					<option value="2024">2024</option>
					<option value="2025">2025</option>
				</select>
			</div>
			<div class="item col-lg-12">
				<label for="CardType">Card Type <span class="req">*</span></label><br />
				<select name="CardType" id="CardType" class="cat_dropdown" required>
					<option value="1">Visa</option>
					<option value="2">Mastercard</option>
				</select>
			</div>
			<div class="item col-lg-12">
				<label for="CardCCV">CCV Number <span class="req">*</span></label><br />
				<input type="text" name="CardCCV" id="CardCCV" class="cat_textbox" autocomplete="off" required />
			</div>
			<div class="item col-lg-12">
				<label for="Amount">Amount <span class="req">*</span> <span id='constraint-300-label'></span></label><br />
				<input type="text" name="Amount" id="Amount" class="cat_textbox readonly" value="280.00" readonly />
			</div>
			<div class="item col-lg-12">
				<button title="Purchase Study Module" class="btn btn-success">Purchase Study Module</button>
			</div>
			<div class="item hide">
				{module_ccsecurity}
				<input checked="checked" type="radio" name="PaymentMethodType" id="PaymentMethodType_1" value="1" />
				<input type="text" maxlength="4000" name="CAT_Custom_19994004" id="CAT_Custom_19994004" class="cat_textbox" placeholder="Item Purchased" />
			</div>
		</div>
		<script type="text/javascript" src="/CatalystScripts/ValidationFunctions.js?vs=b1677.r461496-phase1"></script><script type="text/javascript">
		//<![CDATA[
		var submitcount32231 = 0;function checkWholeForm32231(theForm){var why = "";if (theForm.FirstName) why += isEmpty(theForm.FirstName.value, "First Name"); if (theForm.LastName) why += isEmpty(theForm.LastName.value, "Last Name"); if (theForm.EmailAddress) why += checkEmail(theForm.EmailAddress.value); if (theForm.BillingAddress) why += isEmpty(theForm.BillingAddress.value, "Billing Address"); if (theForm.BillingCity) why += isEmpty(theForm.BillingCity.value, "Billing City"); if (theForm.BillingState) why += isEmpty(theForm.BillingState.value, "Billing State"); if (theForm.BillingZip) why += isEmpty(theForm.BillingZip.value, ""); if (theForm.BillingCountry) why += checkDropdown(theForm.BillingCountry.value, "Billing Country"); if (theForm.PaymentMethodType) why += checkSelected(theForm.PaymentMethodType, "Payment Method");if (theForm.HomePhone) why += isEmpty(theForm.HomePhone.value, "Home Phone Number"); if (!theForm.PaymentMethodType || getRadioSelected(theForm.PaymentMethodType) == 1) { if (theForm.CardName) why += isEmpty(theForm.CardName.value, "Name on Card"); if (theForm.CardNumber) why += isNumeric(theForm.CardNumber.value, "Card Number"); if (theForm.Amount) why += isCurrency(theForm.Amount.value, "Amount"); } if(why != ""){alert(why);return false;}if(submitcount32231 == 0){submitcount32231++;theForm.submit();return false;}else{alert("Form submission is in progress.");return false;}}
		//]]>
		</script>
	</form>	
{% else -%}
	<p><strong>The purchase of a study modules is limited to course attendees and not available to the general public.<br />If you're a course attendee please login below.</strong></p>
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