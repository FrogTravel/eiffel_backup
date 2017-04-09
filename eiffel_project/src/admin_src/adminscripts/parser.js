function getData(query){
	if(query === "All publications in a given year"){
		send("<QUERY1>" + $("#givenYear").val() + "</QUERY1>");
	}else if(query === "Summary information about given unit in given number of years"){
		send("<QUERY2>" + $("#givenUnit").val() + " " + $("#givenNumberOfYears").val() + "</QUERY2>");
	}else if(query === "Courses between two dates local"){
		send("<QUERY3>" + $("#dateOne").val() + " " + $("#dateTwo").val() + "</QUERY3>");
	}
}