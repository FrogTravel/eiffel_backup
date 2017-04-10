function checkForErrors(){
	var totalError = false;
	$(".mandatory").each( function(){
		var error = $(this).val() === "";

		if(error){
			$(this).css("background-color", "#FF8A80");
		}else{
			$(this).css("background-color", "#b7dfb9");
		}

		console.log("ERRORS: " + error);

		totalError = totalError | error;
	})
	return !totalError;
}