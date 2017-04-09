$(document).ready(function(){
	$(".buttonChoice").click( function(event){
		console.log($(this).text());
		console.log($(this).attr("class"));
		console.log($(this).class);

		$(this.class).find("button").html("123");
	}); 
});