$(document).ready(function(){
	// $(function() {
	// 	$( ".datepicker" ).datepicker({
	// 		dateFormat: "dd-mm-yy"
	// 	});
	// });

	$('body').on('focus',".datepicker", function(){
    		$(this).datepicker({
    			dateFormat: "dd-mm-yy"
    		});
		});
	console.log("Initialization");
});