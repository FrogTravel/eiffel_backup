function checkForErrors(){
	var totalError = false;
	$(".mandatory").each( function(){
		var error = $(this).val() === "";

		if(error){
			$(this).css("background-color", "red");
		}else{
			$(this).css("background-color", "green");
		}

		console.log("ERRORS: " + error);

		totalError = totalError | error;
	})
	return !totalError;
}