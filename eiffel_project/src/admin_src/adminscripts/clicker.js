$("#askbtn").click( function(event){
	console.log("btn clicked");
	if($("select").find(":selected").text() === "All publications in a given year"){
		var newElement = "<input id=\"givenYear\" type=\"number\" name=\"year\"></input>"+
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton();
	}

	if($("select").find(":selected").text() === "Summary information about given unit in given number of years"){
		var newElement = "<input id=\"givenUnit\" type=\"text\" name=\"unit\"></input>" + 
		"<input id=\"givenNumberOfYears\" type=\"number\" name=\"years\"></input>" +
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton();
	}

	if($("select").find(":selected").text() === "Courses between two dates local"){
		var newElement = "<input id=\"dateOne\" type=\"number\" name=\"dateOne\"></input>" + 
		"<input id=\"dateTwo\" type=\"number\" name=\"dateTwo\"></input>" +
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton();
	}
})

function setUpSbmButton(){
	$("#submbtn").click(function(event){
		console.log("submbtn");
		var data = getData("query1" + $("#givenYear").text());
		console.log(data);
		var newElement = "<p>" + data + "</p>";
		$("#resultInfo").html(newElement);
	})
}

