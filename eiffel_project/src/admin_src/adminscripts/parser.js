function getData(query){
	if(query === "All publications in a given year"){
		send("<QUERY1>" + $("#givenYear").val() + "</QUERY1>");
	}else if(query === "Summary information about given unit in given number of years"){
		send("<QUERY2>" + $("#givenUnit").val() + " " + $("#givenNumberOfYears").val() + "</QUERY2>");
	}else if(query === "Courses between two dates local"){
		send("<QUERY3>" + $("#dateOne").val() + " " + $("#dateTwo").val() + "</QUERY3>");
	}else if(query === "Number of supervised students"){
		send("<QUERY4>" + $("#unitNameQuery4").val() + "</QUERY4>");
	}else if(query === "Number of research collaborations"){
		send("<QUERY5>" + $("#unitNameQuery5").val() + "</QUERY5>");
	}else if(query === "Examinations by a given unit"){
		send("<QUERY6>" + $("#unitNameQuery6").val() + "</QUERY6>");
	}else if(query === "Prizes by a given unit"){
		send("<QUERY7>" + $("#unitNameQuery7").val() + "</QUERY7>");
	}

}