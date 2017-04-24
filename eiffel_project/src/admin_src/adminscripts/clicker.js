// $("#askbtn").click( function(event){
// 	console.log("btn clicked");
// 	if($("select").find(":selected").text() === "All publications in a given year"){
// 		var newElement = "<input id=\"givenYear\" type=\"number\" name=\"year\"></input>"+
// 		"<button id=\"submbtn\">Submit</button>";
// 		$("#additionalInfo").html(newElement);
// 		setUpSbmButton();
// 	}

// 	if($("select").find(":selected").text() === "Summary information about given unit in given number of years"){
// 		var newElement = "<input id=\"givenUnit\" type=\"text\" name=\"unit\"></input>" + 
// 		"<input id=\"givenNumberOfYears\" type=\"number\" name=\"years\"></input>" +
// 		"<button id=\"submbtn\">Submit</button>";
// 		$("#additionalInfo").html(newElement);
// 		setUpSbmButton();
// 	}

// 	if($("select").find(":selected").text() === "Courses between two dates local"){
// 		var newElement = "<input id=\"dateOne\" type=\"text\" name=\"dateOne\"></input>" + 
// 		"<input id=\"dateTwo\" type=\"text\" name=\"dateTwo\"></input>" +
// 		"<button id=\"submbtn\">Submit</button>";
// 		$("#additionalInfo").html(newElement);
// 		setUpSbmButton();
// 	}
// })

// QUERY 1
$(".buttonChoice").click( function(event){
	console.log($(this).text());
	var data = $(this).text();
	if($(this).text() === "All publications in a given year"){
		var newElement = "<input id=\"givenYear\" placeholder=\"Year\" type=\"number\" name=\"year\"></input>"+
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton(data);
	}

	// QUERY 2
	if($(this).text() === "Summary information about given unit in given number of years"){
		var newElement = "<input id=\"givenUnit\" placeholder=\"Name of unit\" type=\"text\" name=\"unit\"></input>" + 
		"<input id=\"givenNumberOfYears\" placeholder=\"Number of years\" type=\"number\" name=\"years\"></input>" +
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton(data);
	}

	// QUERY 3
	if($(this).text() === "Courses between two dates local"){
		var newElement = "<input id=\"dateOne\" placeholder=\"From dd/mm/yyyy\" type=\"text\" name=\"dateOne\"></input>" + 
		"<input id=\"dateTwo\" placeholder=\"Until dd/mm/yyyy\" type=\"text\" name=\"dateTwo\"></input>" +
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton(data);
	}

	// QUERY 4
	if($(this).text() === "Number of supervised students"){
		var newElement = "<input id=\"unitNameQuery4\" placeholder=\"Name of unit\" type=\"text\" name=\"nameOfUnit\"></input>" + 
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton(data);
	}

	// QUERY 5
	if($(this).text() === "Number of research collaborations"){
		var newElement = "<input id=\"unitNameQuery5\" placeholder=\"Name of unit\" type=\"text\" name=\"nameOfUnit\"></input>" + 
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton(data);
	}

	// QUERY 6
	if($(this).text() === "Examinations by a given unit"){
		var newElement = "<input id=\"unitNameQuery6\" placeholder=\"Name of unit\" type=\"text\" name=\"nameOfUnit\"></input>" + 
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton(data);
	}

	// QUERY 7
	if($(this).text() === "Prizes by a given unit"){
		var newElement = "<input id=\"unitNameQuery7\" placeholder=\"Name of unit\" type=\"text\" name=\"nameOfUnit\"></input>" + 
		"<button id=\"submbtn\">Submit</button>";
		$("#additionalInfo").html(newElement);
		setUpSbmButton(data);
	}

})

function setUpSbmButton(data){
	$("#submbtn").click(function(event){

		getData(data);
	})
}

function appendQuery(data){
	var newElement = "<p>" + data + "</p>";
	$("#resultInfo").html(newElement);
}

