$(document).ready(function(){
	var coursesIndex = 0;
	$("#addbtncourses").click( function(even){
		var newElement = "<div id=\"" + coursesIndex  + "course" + "\" class=\"bigform courses\">" +
			"<p class=\"inline number\">" + (coursesIndex+2) + ". </p>" +
			"<input id=\"COURSENAME\" type=\"text\" name=\"COURSENAME\">" +
			"<select id=\"semesterSelectorCourses\">" +
				 "<option>Fall</option>" +
				 "<option>Spring</option>" +
			 "</select>" +
			 "<select id=\"levelSelectorCourses\">" +
				"<option>Bachelor</option>" +
				"<option>Master</option>" +
				"<option>PhD</option>" +
			"</select>" +
			"<input type=\"number\" name=\"APPROXIMATESTUDENTNUMBER\" id=\"APPROXIMATESTUDENTNUMBER\"></div>";

		coursesIndex += 1;
		
		$("#newCoursesRow").append(newElement);
	})

	$("#removebtncourses").click( function(even){
		if(coursesIndex > 0)
			coursesIndex--;
		$("#" + coursesIndex+ "course").remove();
	})

	//Examinations
	var examsIndex = 0;
	$("#addbtnexams").click( function(even){
		var newElement = "<div class=\"bigform exams\" id=\"" + examsIndex + "exam\">" +
			"<p class=\"inline number\">" + (examsIndex+2) + ". </p>" +	
			"<input id=\"courseName\" type=\"text\" name=\"COURSENAME\">" +
			"<select id=\"examsSelector\">" +
				"<option>Fall</option>" +
				"<option>Spring</option>" +
			"</select>" +
			"<select id=\"kindOfExams\">" +
				"<option>Final</option>" +
				"<option>Repetition</option>" +
			"</select>" +
			"<input id=\"approxStudNumb\" type=\"number\" name=\"APPROXIMATESTUDENTNUMBER\">" +
		"</div>";

		examsIndex++;

		$("#newExamsRow").append(newElement);
		
	})

	$("#removebtnexams").click( function(even){
		if(examsIndex > 0)
			examsIndex--;
		$("#" + examsIndex + "exam").remove();
	})


	//Students supervised
	var supervisedIndex = 0;
	$("#addbtnstudsupervised").click( function(even){
		var newElement = "<div id=\"" + supervisedIndex + "supervised\" class=\"bigform studsupervised\">" + 
			"<input id=\"studentNameStudSupervised\" type=\"text\" name=\"name\">" +
			"<select id=\"levelStudSupervised\">" +
				"<option>Bachelor Thesis</option>" +
				"<option>Master Thesis</option>" +
				"<option>Subber Internship</option>" +
			"</select>" + 
		"</div>";

		supervisedIndex++;
		$("#newStudentsSupervisedRow").append(newElement);
	})

	$("#removebtnstudsupervised").click( function(even){
		if(supervisedIndex > 0)
			supervisedIndex--;
		$("#" + supervisedIndex + "supervised").remove();
	})

	//Completed student reports
	var studReportsIndex = 0;
	$("#addbtnstudreports").click( function(even){
		var newElement = "<div id=\"" + studReportsIndex + "studrep\"class=\"bigform reports\">" +
			"<input id=\"studentNameReports\" type=\"text\" name=\"name\">" +
			"<input id=\"titleOfReportStudent\" type=\"text\" name=\"titleofreport\">" +
			"<input id=\"plansForPublication\" class=\"notMandatory\" type=\"text\" name=\"plans\">" +
		"</div>";

		studReportsIndex++;

		$("#newCompletedReportsRow").append(newElement);
	})

	$("#removebtnstudreports").click( function(even){
		if(studReportsIndex > 0)
			studReportsIndex--;
		$("#" + studReportsIndex + "studrep").remove();
	})

	//Completed PhD Theses
	var compPhDIndex = 0;
	$("#addbtncompphd").click( function(even){
		var newElement = "<div id=\"" + compPhDIndex + "compPhD\" class=\"bigform theses\">" +
			"<input id=\"studentNameTheses\" type=\"text\" name=\"name\">" +
			"<select id=\"degreeSelector\">" + 
				"<option>PhD</option>" +
				"<option>Dr. Sc.</option>" +
			"</select>" +
			"<input id=\"supervisorName\" type=\"text\" name=\"name\">" +
			"<input id=\"otherMembersName\" type=\"type\" name=\"nameOfComitee\">" +
			"<input id=\"nameOfDegreeGrantingInstitution\" type=\"text\" name=\"nameOfInstitution\">" +
			"<input id=\"titleOfTheses\" type=\"text\" name=\"titleOfTheses\">" +
		"</div>"

		compPhDIndex++;
		$("#newCompletedPhDTheses").append(newElement);
	})

	$("#removebtncompphd").click( function(even){
		if(compPhDIndex>0)
			compPhDIndex--;

		$("#" + compPhDIndex + "compPhD").remove();
	})

	//Grants
	var grantsIndex = 0;
	$("#addbtnGrants").click( function(even){
		console.log("123");
		var newElement = "<div id=\"" + grantsIndex + "grants\" class=\"bigform grants\">" + 
			"<p class=\"inline number\">" + (grantsIndex+2) + ". </p>" +
			"<input id=\"titleOfProject\" type=\"text\" name=\"name\">" +
			"<input id=\"grantingAgency\" type=\"text\" name=\"agency\">" +
			"<input  id=\"durationGrants\" type=\"number\" name=\"date\">" +
			"<input id=\"amountOfGrant\" type=\"text\" name=\"amountOfGrant\">" +
		"</div>";
		grantsIndex++;

		$("#newGrantRow").append(newElement);


	})

	$("#removebtnGrants").click( function(even){
		if(grantsIndex>0)
			grantsIndex--;

		$("#" + grantsIndex + "grants").remove();
	})

	//Research projects
	var researchProjIndex = 0;
	$("#addbtnResearchProj").click( function(even){
		var newElement = "<div id=\"" + researchProjIndex + "rP\" class=\"bigform researchProj\">" +
			"<p class=\"inline number\">"+ (researchProjIndex+2) + ". </p>" +
			"<input id=\"titleOfProjectResearch\" type=\"text\" name=\"name\">" +
			"<input id=\"IUpersonnel\" type=\"text\" name=\"IUpersonnel\">" +
			"<input id=\"externalPersonnel\" type=\"text\" name=\"externalPersonnel\">" +
			"<input  class=\"datepicker\" id=\"startDateOfProject\" type=\"text\" name=\"date\">" + 
			"<input  class=\"datepicker\" id=\"endDateOfProject\" type=\"text\" name=\"date\">" +
			"<input id=\"sourceOfFinance\" type=\"text\" name=\"sourceOfFinance\">" +
		"</div>";
		researchProjIndex++;

		$("#newResearchProjectsRow").append(newElement);
	})

	$("#removebtnResearchProj").click( function(even){
		if(researchProjIndex>0)
			researchProjIndex--;

		$("#" + researchProjIndex + "rP").remove();
	})

	//Research collaborations
	var resColl = 0;
	$("#addbtnResearchColl").click( function(even){
		var newElement = "<div id=\"" + resColl + "rC\" class=\"bigform researchColl\">" +
			"<p class=\"inline number\">" + (resColl+2) +". </p>" +
			"<input id=\"countryOfInst\" type=\"text\" name=\"country\">" +
			"<input id=\"nameOfInstitution\" type=\"text\" name=\"nameOfInstitution\">" +
			"<input id=\"departmentOfUnit\" class=\"notMandatory\" type=\"text\" name=\"departmentOfUnit\">" +
			"<input id=\"nameOfPrincipal\" type=\"text\" name=\"nameOfPrincipal\">" +
			"<input id=\"otherImportantContacts\" type=\"text\" name=\"otherImportantContacts\">" +
			"<input id=\"natureOfColl\" type=\"text\" name=\"natureOfColl\">" +
		"</div>";

		resColl++;
		$("#newResearchCollaborationsRow").append(newElement);
	})

	$("#removebtnResearchColl").click( function(even){
		if(resColl>0)
			resColl--;

		$("#" + resColl + "rC").remove();
	})

	//Conference publications
	var confPubl = 0;
	$("#addbtnconference").click( function(even){
		var newElement = "<div id=\"" + confPubl + "cP\"class=\"bigform conferencePubl\">" + 
			"<p class=\"inline number\">" + (confPubl+2) + ". </p>" +
			"<input id=\"publications\" type=\"text\" name=\"publications\">" +
		"</div>";
		confPubl++;

		$("#newConferencePublRow").append(newElement);
	})

	$("#removebtnconference").click( function(even){
		if(confPubl>0)
			confPubl--;

		$("#" + confPubl + "cP").remove();
	})


	//Journal publications
	var jourPubl = 0;
	$("#addbtnjournalpubl").click( function(even){
		var newElement = "<div id=\"" + jourPubl + "jP\" class=\"bigform journalPubl\">" +
			"<p class=\"inline number\">" + (jourPubl+2) + ". </p>" +
			"<input id=\"publications\" type=\"text\" name=\"publications\">" +
		"</div>";
		jourPubl++;

		$("#newJournalPublRow").append(newElement);

	})

	$("#removejournalpubl").click( function(even){
		if(jourPubl>0)
			jourPubl--;

		$("#" + jourPubl + "jP").remove();
	})

});


















