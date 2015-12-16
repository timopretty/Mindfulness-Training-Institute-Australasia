<form action="/FormProcessv2.aspx?WebFormID=112148&OID={module_oid}&OTYPE={module_otype}&EID={module_eid}&CID={module_cid}" enctype="multipart/form-data" onSubmit="return checkWholeForm42838(this)" method="post" name="catwebformform42838" class="form-style" id="application-upload">
	<p style="color: #545454"><span class="req">*</span> Required fields</p>
	<div class="form row">
		<div class="form-group">
			<div class="item col-lg-24">
				<p><strong>Your Details</strong></p>
			</div>
		</div>
		<div class="form-group">
			<div class="item col-lg-12">
				<label for="FullName">Full Name <span class="req">*</span></label><br />
				<input type="text" class="cat_textbox" id="FullName" name="FullName" maxlength="4000" />
			</div>
			<div class="item col-lg-12">
				<label for="EmailAddress">Email Address <span class="req">*</span></label><br />
				<input type="text" maxlength="255" class="cat_textbox" id="EmailAddress" name="EmailAddress" />
			</div>
		</div>
		<div class="form-group">
			<div class="item col-lg-12">
				<label for="CAT_Custom_20029071">Confirm Email <span class="req">*</span></label><br />
				<input type="text" class="cat_textbox" id="CAT_Custom_20029071" name="CAT_Custom_20029071" maxlength="4000" />
			</div>
			<div class="item col-lg-12">
				<label for="CAT_Custom_20029072">Telephone <span class="req">*</span></label><br />
				<input type="text" class="cat_textbox" id="CAT_Custom_20029072" name="CAT_Custom_20029072" maxlength="4000" />
			</div>
		</div>
		<div class="form-group">
			<div class="item col-lg-12">
				<label for="CAT_Custom_20029092">Training Course <span class="req">*</span></label><br />
				<select name="CAT_Custom_20029092" id="CAT_Custom_20029092" class="cat_dropdown">
					<option value=" " selected="selected">- Please Select -</option>
					<option value="Level I" data-workflow="62706">Level I</option>
					<option value="Level II" data-workflow="63452">Level II</option>
				</select>
			</div>
			<div class="item col-lg-12">
				<label for="FileAttachment">Registration Form Upload <span class="req">*</span></label><br />
				<input type="file" name="FileAttachment" id="FileAttachment" class="cat_textbox" />
			</div>
		</div>
		<div class="form-group">
			<div class="item col-lg-24">
				<button title="Upload" class="btn btn-success">Upload</button>
			</div>
		</div>
		<div class="form-group hide">
			<input type="text" class="cat_textbox" id="WorkflowList" name="WorkflowList" placeholder="Workflow ID" readonly="readonly" />
			{module_ccsecurity}
		</div>
	</div>
	<script type="text/javascript" src="/CatalystScripts/ValidationFunctions.js"></script>
	<script type="text/javascript">
	//<![CDATA[
	var submitcount66021 = 0;function checkWholeForm42838(theForm){
		var why = "";
		if (theForm.FullName) why += isEmpty(theForm.FullName.value, "Full Name");
		if (theForm.EmailAddress) why += checkEmail(theForm.EmailAddress.value);
		if (theForm.CAT_Custom_20029071) why += isEmpty(theForm.CAT_Custom_20029071.value, "Confirm Email");
		if (theForm.CAT_Custom_20029072) why += isEmpty(theForm.CAT_Custom_20029072.value, "Telephone");
		if (theForm.CAT_Custom_20029092) why += isEmpty(theForm.CAT_Custom_20029092.value, "Training Course");
		if (theForm.FileAttachment) why += isEmpty(theForm.FileAttachment.value, "Registration Form");
		if(why != ""){
			alert(why);
			return false;
		}
		if(submitcount66021 == 0){
			submitcount66021++;theForm.submit();
			return false;
		} else {
			alert("Form submission is in progress.");
			return false;
		}
	}
	//]]>
	</script>
</form>
