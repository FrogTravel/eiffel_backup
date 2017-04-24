// Collect all data from webpage 
function collect(){
	var query;// Total query that will be send 

	// Temp variables for each section 
	var unitName = $("#UNITNAME").val();
	var unitHeadName = $("#UNITHEADNAME").val();
	var startDate = $("#REPORTSTARTDATE").datepicker("getDate");

	if(startDate === null){// If date was null
		startDateString = "00/00/00000";
	}else{
		var startDateString = startDate.getDate() + " ";
		startDateString += (startDate.getMonth() + 1) + " ";
		startDateString += startDate.getYear() + 1900;
	}

	var endDate = $("#REPORTENDDATE").datepicker("getDate");
	if(endDate === null){
		endDateString = "00/00/0000";
	}else{
		var endDateString = endDate.getDate() + " ";
		endDateString += (endDate.getMonth() + 1) + " "
		endDateString += endDate.getYear() + 1900;
	}

	// Courses taught
	var coursesTaught = "";
	$(".courses").each( function() {
		coursesTaught += $(this).find("#COURSENAME").val() + " ";
		coursesTaught += $(this).find("#semesterSelectorCourses").find(":selected").text() + " ";
		coursesTaught += $(this).find("#levelSelectorCourses").find(":selected").text() + " ";
		coursesTaught += $(this).find("#APPROXIMATESTUDENTNUMBER").val() + "<br> ";
	});

	// Examinations
	var exams = "";
	$(".exams").each( function(){
		exams += $(this).find("#courseName").val() + " ";
		exams += $(this).find("#examsSelector").find(":selected").text() + " ";
		exams += $(this).find("#kindOfExams").find(":selected").text() + " ";
		exams += $(this).find("#approxStudNumb").val() + "<br> ";
	})

	// Students supervised 
	var studentsSupervised = "";
	$(".studsupervised").each( function(){
		studentsSupervised += $(this).find("#studentNameStudSupervised").val() + " ";
		studentsSupervised += $(this).find("#levelStudSupervised").find(":selected").text() + "<br> ";
	})

	// Completed student reports
	var reports = "";
	$(".reports").each( function(){
		reports += $(this).find("#studentNameReports").val() + " ";
		reports += $(this).find("#titleOfReportStudent").val() + " ";
		reports += $(this).find("#plansForPublication").val() + "<br> ";
	})

	// Completed PhD theses
	var completedPhD = "";
	$(".theses").each( function(){
		completedPhD += $(this).find("#studentNameTheses").val() + " ";
		completedPhD += $(this).find("#degreeSelector").find(":selected").text() + " ";
		completedPhD += $(this).find("#supervisorName").val() + " ";
		completedPhD += $(this).find("#otherMembersName").val() + " ";
		completedPhD += $(this).find("#nameOfDegreeGrantingInstitution").val() + " ";
		completedPhD += $(this).find("#titleOfTheses").val() + "<br> ";
	})

	// Grants
	var grants = "";
	$(".grants").each( function(){
		grants += $(this).find("#titleOfProject").val() + " ";
		grants += $(this).find("#grantingAgency").val() + " ";
		grants += $(this).find("#durationGrants").val() + " ";
		grants += $(this).find("#amountOfGrant").val() + "<br> ";
	})

	// Research projects
	var researchProjects = "";
	$(".researchProj").each( function(){
		researchProjects += $(this).find("#titleOfProjectResearch").val() + " ";
		researchProjects += $(this).find("#IUpersonnel").val() + " ";
		researchProjects += $(this).find("#externalPersonnel").val() + " ";
		researchProjects += $(this).find("#startDateOfProject").val() + " ";
		researchProjects += $(this).find("#endDateOfProject").val() + " ";
		researchProjects += $(this).find("#sourceOfFinance").val() + "<br> ";
	})


	// Research Collaborations
	var researchColl = "";
	$(".researchColl").each( function(){
		researchColl += $(this).find("#countryOfInst").val() + " ";
		researchColl += $(this).find("#nameOfInstitution").val() + " ";
		researchColl += $(this).find("#departmentOfUnit").val() + " ";
		researchColl += $(this).find("#nameOfPrincipal").val() + " ";
		researchColl += $(this).find("#otherImportantContacts").val() + " ";
		researchColl += $(this).find("#natureOfColl").val() + "<br> ";
	})

	// Conference Publications
	var conferencePubl = "";
	$(".conferencePubl").each( function(){
		conferencePubl += $(this).find("#publications").val() + "<br> ";
	})

	// Journal Publications
	var journalPubl = "";
	$(".journalPubl").each( function(){
		journalPubl += $(this).find("#publications").val() + "<br> ";
	})

	// Patents
	var patents = "";
	$(".patents").each( function(){
		patents += $(this).find("#patentsFilled").val() + " ";
		patents += $(this).find("#countryOfPatent").val() + "<br>";
	})

	// IP licesing (software of others) 
	var iplic = "";
	$(".IPlic").each( function() {
		iplic += $(this).find("#licensesGranted").val() + "<br>";
	})

	// Best Papers
	var bestPaper = "";
	$(".bestPaper").each( function(){
		bestPaper += $(this).find("#authorOfPaper").val() + " ";
		bestPaper += $(this).find("#titleOfArticle").val() + " ";
		bestPaper += $(this).find("#awardingConferenceJournal").val() + " ";
		bestPaper += $(this).find("#exactWording").val() + " ";
		bestPaper += $(this).find("#dateOfAwarding").val() + "<br>";
	})

	// Membership
	var membership = "";
	$(".membership").each( function(){
		membership += $(this).find("#membername").val() + " ";
		membership += $(this).find("#dateOfMembership").val() + "<br>";
	})

	// Prizes
	var prizes = "";
	$(".prizes").each( function(){
		prizes += $(this).find("#recipientOfPrize").val() + " ";
		prizes += $(this).find("#nameOfPrize").val() + " ";
		prizes += $(this).find("#grantingInstitution").val() + " ";
		prizes += $(this).find("#dateOfPrize").val() + "<br>";
	})

	// Industry collaboration
	var outside = "";
	$(".industryColl").each( function(){
		outside += $(this).find("#companyOfIndColl").val() + " ";
		outside += $(this).find("#natureOfIndColl").val() + "<br>";
	})

	// Other relevant information
	var other = "";
	$(".otherInf").each( function(){
		other += $(this).find("#otherInf").val() + "<br>";
	})

	
	// Connect all data 
	if(checkForErrors()){
		query = "<USERPAGE>" + "<UNITNAME>" + unitName + "</UNITNAME>" +
			"<UNITHEADNAME>" + unitHeadName + "</UNITHEADNAME>" +
			"<REPORTSTARTDATE>" + startDateString + "</REPORTSTARTDATE>" +
			"<REPORTENDDATE>" + endDateString + "</REPORTENDDATE>" + 
			"<COURSESTAUGHT>" + coursesTaught.trim() + "</COURSESTAUGHT>" + 
			"<EXAMSADMIN>" + exams.trim() + "</EXAMSADMIN>" +
			"<STUDENTSSUPERVISED>" + studentsSupervised.trim() + "</STUDENTSSUPERVISED>" + 
			"<STUDENTREPORTS>" + reports.trim() + "</STUDENTREPORTS>" + 
			"<PHDTHESES>" + completedPhD.trim() + "</PHDTHESES>" +
			"<GRANTSWON>" + grants.trim() + "</GRANTSWON>" + 
			"<RESEARCHPROJECTS>" + researchProjects.trim() + "</RESEARCHPROJECTS>" +
			"<RESEARCHCOLL>" + researchColl.trim() + "</RESEARCHCOLL>" + 
			"<CONFERENCEPUBL>" + conferencePubl.trim() + "</CONFERENCEPUBL>" + 
			"<JOURNALPUBL>" + journalPubl.trim() + "</JOURNALPUBL>" +
			"<PATENTS>" + patents.trim() + "</PATENTS>" +
			"<IPLIC>" + iplic.trim() + "</IPLIC>" +
			"<BESTPAPER>" + bestPaper.trim() + "</BESTPAPER>" +
			"<MEMBERSHIP>" + membership.trim() + "</MEMBERSHIP>" +
			"<PRIZES>" + prizes.trim() + "</PRIZES>" +
			"<INDUSTRYCOLL>" + outside.trim() + "</INDUSTRYCOLL>" +
			"<OTHER>" + other.trim() + "</OTHER>" +
			"</USERPAGE>";
	
		send(query);
		$("#info").html("<p class=\"inline\">Sent successfully</p>"); // For user show that data was send succesfully 
	}else{
		$("#info").html("<p class=\"inline\">Not all mandatory fields was filled</p>");
	}
	
}