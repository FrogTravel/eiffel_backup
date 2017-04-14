$(document).ready(function(){
	var coursesIndex = 0;
	$("#addbtncourses").click( function(even){
		var newElement = "<div id=\"" + coursesIndex  + "course" + "\" class=\"bigform courses\">" +
			"<p class=\"inline number\">" + (coursesIndex+2) + ". </p>" +
			"<input id=\"COURSENAME\" class=\"mandatory newElement\" type=\"text\" placeholder=\"Course name\" name=\"COURSENAME\">" +
			"<select id=\"semesterSelectorCourses\" class=\"newElement\">" +
				 "<option>Fall</option>" +
				 "<option>Spring</option>" +
			 "</select>" +
			 "<select id=\"levelSelectorCourses\" class=\"newElement\"> " +
				"<option>Bachelor</option>" +
				"<option>Master</option>" +
				"<option>PhD</option>" +
			"</select>" +
			"<input placeholder=\"Amount of students\" class=\"mandatory newElement\"  type=\"number\" name=\"APPROXIMATESTUDENTNUMBER\" id=\"APPROXIMATESTUDENTNUMBER\"></div>";

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
			"<input id=\"courseName\" class=\"mandatory newElement\" placeholder=\"Course name\"  type=\"text\" name=\"COURSENAME\">" +
			"<select id=\"examsSelector\" class=\"newElement\">" +
				"<option>Fall</option>" +
				"<option>Spring</option>" +
			"</select>" +
			"<select id=\"kindOfExams\" class=\"newElement\">" +
				"<option>Final</option>" +
				"<option>Repetition</option>" +
			"</select>" +
			"<input id=\"approxStudNumb\" class=\"mandatory newElement\" placeholder=\"Amount of students\" type=\"number\" name=\"APPROXIMATESTUDENTNUMBER\">" +
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
			"<input id=\"studentNameStudSupervised\" class=\"mandatory newElement\" placeholder=\"Student name\" type=\"text\" name=\"name\">" +
			"<select id=\"levelStudSupervised\" class=\"newElement\">" +
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
		var newElement = "<div id=\"" + studReportsIndex + "studrep\" class=\"bigform reports\">" +
			"<input id=\"studentNameReports\" class=\"mandatory newElement\" placeholder=\"Student name\" type=\"text\" name=\"name\">" +
			"<input id=\"titleOfReportStudent\" class=\"mandatory newElement\" placeholder=\"Title of Report\" type=\"text\" name=\"titleofreport\">" +
			"<input id=\"plansForPublication\" class=\"newElement\" placeholder=\"Publication plans\" class=\"notMandatory\" type=\"text\" name=\"plans\">" +
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
			"<input id=\"studentNameTheses\" class=\"newElement\" placeholder=\"Student name\" type=\"text\" name=\"name\">" +
			"<select id=\"degreeSelector\" class=\"newElement\">" + 
				"<option>PhD</option>" +
				"<option>Dr. Sc.</option>" +
			"</select>" +
			"<input id=\"supervisorName\" class=\"newElement\" placeholder=\"Name of supervisor\" type=\"text\" name=\"name\">" +
			"<input id=\"otherMembersName\" class=\"newElement\" placeholder=\"Other members name\" type=\"type\" name=\"nameOfComitee\">" +
			"<input id=\"nameOfDegreeGrantingInstitution\" class=\"newElement\" placeholder=\"Degree-Granting institution\" type=\"text\" name=\"nameOfInstitution\">" +
			"<input id=\"titleOfTheses\" class=\"newElement\" placeholder=\"Title of dissertation\" type=\"text\" name=\"titleOfTheses\">" +
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
			"<input id=\"titleOfProject\" class=\"mandatory newElement\" placeholder=\"Title of project\" type=\"text\" name=\"name\">" +
			"<input id=\"grantingAgency\" class=\"mandatory newElement\" placeholder=\"Granting agency\" type=\"text\" name=\"agency\">" +
			"<input  id=\"durationGrants\" class=\"mandatory newElement\" placeholder=\"Period covered by grant (in years)\" type=\"number\" name=\"date\">" +
			"<input id=\"amountOfGrant\" class=\"mandatory newElement\" placeholder=\"Amount of grant\" type=\"text\" name=\"amountOfGrant\">" +
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
			"<input id=\"titleOfProjectResearch\" class=\"mandatory newElement\" placeholder=\"Title of project\" type=\"text\" name=\"name\">" +
			"<input id=\"IUpersonnel\" class=\"mandatory newElement\" placeholder=\"IU persons involved\" type=\"text\" name=\"IUpersonnel\">" +
			"<input id=\"externalPersonnel\" class=\"mandatory newElement\" placeholder=\"External persons involved\" type=\"text\" name=\"externalPersonnel\">" +
			"<div></div>" + 
			"<p class=\"inline\" style=\"color: transparent;\">11</p>" +
			"<input  class=\"datepicker newElement\" id=\"startDateOfProject\" placeholder=\"Start date\" type=\"text\" name=\"date\">" + 
			"<input  class=\"datepicker newElement\" id=\"endDateOfProject\" placeholder=\"End date\" type=\"text\" name=\"date\">" +
			"<input id=\"sourceOfFinance\" class=\"mandatory newElement\" placeholder=\"Source of financing\" type=\"text\" name=\"sourceOfFinance\">" +
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
			"<input id=\"countryOfInst\" class=\"mandatory newElement\" placeholder=\"Country of institution\" type=\"text\" name=\"country\">" +
			"<input id=\"nameOfInstitution\" class=\"mandatory newElement\" placeholder=\"Name of institution\" type=\"text\" name=\"nameOfInstitution\">" +
			"<input id=\"departmentOfUnit\" class=\"notMandatory newElement\" placeholder=\"Department\" type=\"text\" name=\"departmentOfUnit\">" +
			"<div></div>" + 
			"<p class=\"inline\" style=\"color: transparent;\">11</p>" +
			"<input id=\"nameOfPrincipal\" class=\"mandatory newElement\" placeholder=\"Name of Principal\" type=\"text\" name=\"nameOfPrincipal\">" +
			"<input id=\"otherImportantContacts\" class=\"mandatory newElement\" placeholder=\"Other important contacts\" type=\"text\" name=\"otherImportantContacts\">" +
			"<input id=\"natureOfColl\" class=\"mandatory newElement\" placeholder=\"Nature of collaboration\" type=\"text\" name=\"natureOfColl\">" +
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
			"<input id=\"publications\" class=\"mandatory\" placeholder=\"Name of publication\" type=\"text\" name=\"publications\">" +
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
			"<input id=\"publications\" class=\"mandatory\" placeholder=\"Name of publication\" type=\"text\" name=\"publications\">" +
		"</div>";
		jourPubl++;

		$("#newJournalPublRow").append(newElement);

	})

	$("#removejournalpubl").click( function(even){
		if(jourPubl>0)
			jourPubl--;

		$("#" + jourPubl + "jP").remove();
	})

	//Patents
	var patents = 0;
	$("#addbtnPatents").click( function(even){
		var newElement = "<div id='" + patents + "pat' class='bigform patents'>" +
			"<input id='patentsFilled' class='notMandatory newElement' placeholder='Patents filled' type='text' name='patentsFilled'>" +
			"<input id='countryOfPatent' class='notMandatory' placeholder='Country of patent office' type='text' name='countryOfPatent'>" +
			"<div id='newPatentsRow'></div>" +
		"</div>	";
		patents++;

		$("#newPatentsRow").append(newElement);

	})

	$("#removebtnPatents").click( function(even){
		if(patents>0)
			patents--;

		$("#" + patents + "pat").remove();
	})
});


















