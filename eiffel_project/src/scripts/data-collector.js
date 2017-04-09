function collect(){
	var query;

	var unitName = $("#UNITNAME").val();
	var unitHeadName = $("#UNITHEADNAME").val();
	var startDate = $("#REPORTSTARTDATE").datepicker("getDate");
	var endDate = $("#REPORTENDDATE").datepicker("getDate");
	var coursesTaught = "";

	$(".courses").each( function() {
		console.log("ITERATION");
		console.log($(this).find("#COURSENAME").val());

		coursesTaught += $(this).find("#COURSENAME").val() + " ";
		coursesTaught += $(this).find("#semesterSelectorCourses").find(":selected").text() + " ";
		coursesTaught += $(this).find("#levelSelectorCourses").find(":selected").text() + " ";
		coursesTaught += $(this).find("#APPROXIMATESTUDENTNUMBER").val() + "; ";
	});

	var exams = "";
	$(".exams").each( function(){
		console.log("Exam Interation!");
		exams += $(this).find("#courseName").val() + " ";
		exams += $(this).find("#examsSelector").find(":selected").text() + " ";
		exams += $(this).find("#kindOfExams").find(":selected").text() + " ";
		exams += $(this).find("#approxStudNumb").val() + "; ";
	})

	var studentsSupervised = "";
	$(".studsupervised").each( function(){
		studentsSupervised += $(this).find("#studentNameStudSupervised").val() + " ";
		studentsSupervised += $(this).find("#levelStudSupervised").find(":selected").text() + "; ";
	})


	var reports = "";
	$(".reports").each( function(){
		reports += $(this).find("#studentNameReports").val() + " ";
		reports += $(this).find("#titleOfReportStudent").val() + " ";
		reports += $(this).find("#plansForPublication").val() + "; ";
	})

	var completedPhD = "";
	$(".theses").each( function(){
		completedPhD += $(this).find("#studentNameTheses").val() + " ";
		completedPhD += $(this).find("#degreeSelector").find(":selected").text() + " ";
		completedPhD += $(this).find("#supervisorName").val() + " ";
		completedPhD += $(this).find("#otherMembersName").val() + " ";
		completedPhD += $(this).find("#nameOfDegreeGrantingInstitution").val() + " ";
		completedPhD += $(this).find("#titleOfTheses").val() + "; ";
	})

	var grants = "";
	$(".grants").each( function(){
		grants += $(this).find("#titleOfProject").val() + " ";
		grants += $(this).find("#grantingAgency").val() + " ";
		grants += $(this).find("#durationGrants").val() + " ";
		grants += $(this).find("#amountOfGrant").val() + "; ";
	})

	var researchProjects = "";
	$(".researchProj").each( function(){
		researchProjects += $(this).find("#titleOfProjectResearch").val() + " ";
		researchProjects += $(this).find("#IUpersonnel").val() + " ";
		researchProjects += $(this).find("#externalPersonnel").val() + " ";
		//TODO datepicker id startDateOfProject
		//TODO datepicker id endDateOfProject
		researchProjects += $(this).find("#sourceOfFinance").val() + "; ";
	})

	var researchColl = "";
	$(".researchColl").each( function(){
		researchColl += $(this).find("#countryOfInst").val() + " ";
		researchColl += $(this).find("#nameOfInstitution").val() + " ";
		researchColl += $(this).find("#departmentOfUnit").val() + " ";
		researchColl += $(this).find("#nameOfPrincipal").val() + " ";
		researchColl += $(this).find("#otherImportantContacts").val() + " ";
		researchColl += $(this).find("#natureOfColl").val() + "; ";
	})

	var conferencePubl = "";
	$(".conferencePubl").each( function(){
		conferencePubl += $(this).find("#publications").val() + "; ";
	})

	var journalPubl = "";
	$(".journalPubl").each( function(){
		journalPubl += $(this).find("#publications").val() + "; ";
	})

	
	if(checkForErrors()){
		console.log("Exams: " + exams);

		query = "<USERPAGE>" + "<UNITNAME>" + unitName + "</UNITNAME>" +
			"<UNITHEADNAME>" + unitHeadName + "</UNITHEADNAME>" +
			"<REPORTSTARTDATE>" + startDate + "</REPORTSTARTDATE>" +
			"<REPORTENDDATE>" + endDate + "</REPORTENDDATE>" + 
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
			"</USERPAGE>";
	

		console.log(query);
		send(query);
	}else{
		console.log("error")
	}
	
}