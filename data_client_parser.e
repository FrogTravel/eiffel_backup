note
	description: "Summary description for {DATA_CLIENT_PARSER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DATA_CLIENT_PARSER
create
	make

feature {NONE} -- Initialization

	make
		do
		end
feature
	parse_and_save(data: STRING)
	local
		i_string: STRING
		check_string: STRING
		db_helper: DB_HELPER
	do
		create check_string.make_empty
		create db_helper.make
		print("%N----STARTING PARCING PROCESS----%N")
		print("%NDATA: " + data + "%N")
		i_string := data
		check_string := i_string.substring (1, 6)
		if check_string.is_equal ("<USERP") then
			print("USERPAGE FOUND")
			i_string := i_string.substring (11, i_string.count)
			db_helper.add_data (getUnitName(i_string), getUnitHeadName(i_string), getReportStartDate(i_string), getReportEndDate(i_string), getCoursesTaught(i_string), getExamsAdmin(i_string), getStudentsSupervised(i_string), getStudentReports(i_string), getPhDTheses(i_string), getGrantsWon(i_string), getResearchProjects(i_string), getResearchCollaborations(i_string), getConferencePublications(i_string), getJournalPublications(i_string), getPatents(i_string), getIPLic(i_string), getBestPaper(i_string), getMemberships(i_string), getPrizes(i_string), getIndustryColl(i_string), getOtherInfo(i_string))

--			Io.put_string(getUnitName(i_string))
--			Io.put_new_line
--			Io.put_string(getUnitHeadName(i_string))
--			Io.put_new_line
--			Io.put_string(getReportStartDate(i_string))
--			Io.put_new_line
--			Io.put_string(getReportEndDate(i_string))
--			Io.put_new_line
--			Io.put_string(getCoursesTaught(i_string))
--			Io.put_new_line
--			Io.put_string(getExamsAdmin(i_string))
--			Io.put_new_line
--			Io.put_string(getStudentsSupervised(i_string))
--			Io.put_new_line
--			Io.put_string(getStudentReports(i_string))
--			Io.put_new_line
--			Io.put_string(getPhDTheses(i_string))
--			Io.put_new_line
--			Io.put_string(getGrantsWon(i_string))
--			Io.put_new_line
--			Io.put_string(getResearchProjects(i_string))
--			Io.put_new_line
--			Io.put_string(getResearchCollaborations(i_string))
--			Io.put_new_line
--			Io.put_string(getConferencePublications(i_string))
--			Io.put_new_line
--			Io.put_string(getJournalPublications(i_string))
		end
	end


feature
	getUnitName(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<UNITNAME>")
			then
				i := i_str.substring_index ("<UNITNAME>", 1)
				k := i_str.substring_index ("</UNITNAME>", 1)
				if i_str.substring (i + 10, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 10, k - 1)
				end
			else Result := ""
			end
		end
	getUnitHeadName(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<UNITHEADNAME>")
			then
				i := i_str.substring_index ("<UNITHEADNAME>", 1)
				k := i_str.substring_index ("</UNITHEADNAME>", 1)
				if i_str.substring (i + 14, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 14, k - 1)
				end
			else Result := ""
			end
		end
	getReportStartDate(i_str: STRING): STRING
		local
			i,k: INTEGER
			str: STRING
		do
			create str.make_empty
			if
				i_str.has_substring ("<REPORTSTARTDATE>")
			then
				i := i_str.substring_index ("<REPORTSTARTDATE>", 1)
				k := i_str.substring_index ("</REPORTSTARTDATE>", 1)
				if i_str.substring (i + 17, k - 1).same_string ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 17, k - 1)
				end
			else Result := ""
			end
		end
	getReportEndDate(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<REPORTENDDATE>")
			then
				i := i_str.substring_index ("<REPORTENDDATE>", 1)
				k := i_str.substring_index ("</REPORTENDDATE>", 1)
				if i_str.substring (i + 15, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 15, k - 1)
				end
			else Result := ""
			end
		end
	getCoursesTaught(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<COURSESTAUGHT>")
			then
				i := i_str.substring_index ("<COURSESTAUGHT>", 1)
				k := i_str.substring_index ("</COURSESTAUGHT>", 1)
				if i_str.substring (i + 15, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 15, k - 1)
				end
			else Result := ""
			end
		end
	getExamsAdmin(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<EXAMSADMIN>")
			then
				i := i_str.substring_index ("<EXAMSADMIN>", 1)
				k := i_str.substring_index ("</EXAMSADMIN>", 1)
				if i_str.substring (i + 12, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 12, k - 1)
				end
			else Result := ""
			end
		end
	getStudentsSupervised(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<STUDENTSSUPERVISED>")
			then
				i := i_str.substring_index ("<STUDENTSSUPERVISED>", 1)
				k := i_str.substring_index ("</STUDENTSSUPERVISED>", 1)
				if i_str.substring (i + 20, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 20, k - 1)
				end
			else Result := ""
			end
		end
	getStudentReports(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<STUDENTREPORTS>")
			then
				i := i_str.substring_index ("<STUDENTREPORTS>", 1)
				k := i_str.substring_index ("</STUDENTREPORTS>", 1)
				if i_str.substring (i + 16, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 16, k - 1)
				end
			else Result := ""
			end
		end
	getPhDTheses(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<PHDTHESES")
			then
				i := i_str.substring_index ("<PHDTHESES>", 1)
				k := i_str.substring_index ("</PHDTHESES>", 1)
				if i_str.substring (i + 11, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 11, k - 1)
				end
			else Result := ""
			end
		end
	getGrantsWon(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<GRANTSWON>")
			then
				i := i_str.substring_index ("<GRANTSWON>", 1)
				k := i_str.substring_index ("</GRANTSWON>", 1)
				if i_str.substring (i + 11, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 11, k - 1)
				end
			else Result := ""
			end
		end
	getResearchProjects(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<RESEARCHPROJECTS>")
			then
				i := i_str.substring_index ("<RESEARCHPROJECTS>", 1)
				k := i_str.substring_index ("</RESEARCHPROJECTS>", 1)
				if i_str.substring (i + 18, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 18, k - 1)
				end
			else Result := ""
			end
		end
	getResearchCollaborations(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<RESEARCHCOLL>")
			then
				i := i_str.substring_index ("<RESEARCHCOLL>", 1)
				k := i_str.substring_index ("</RESEARCHCOLL>", 1)
				if i_str.substring (i + 14, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 14, k - 1)
				end
			else Result := ""
			end
		end
	getConferencePublications(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<CONFERENCEPUBL>")
			then
				i := i_str.substring_index ("<CONFERENCEPUBL>", 1)
				k := i_str.substring_index ("</CONFERENCEPUBL>", 1)
				if i_str.substring (i + 16, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 16, k - 1)
				end
			else Result := ""
			end
		end
	getJournalPublications(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<JOURNALPUBL>")
			then
				i := i_str.substring_index ("<JOURNALPUBL>", 1)
				k := i_str.substring_index ("</JOURNALPUBL>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 13, k - 1)
				end
			else Result := ""
			end
		end

		getPatents(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<PATENTS>")
			then
				i := i_str.substring_index ("<PATENTS>", 1)
				k := i_str.substring_index ("</PATENTS>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 9, k - 1)
				end
			else Result := ""
			end
		end
	getIPLic(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<IPLIC>")
			then
				i := i_str.substring_index ("<IPLIC>", 1)
				k := i_str.substring_index ("</IPLIC>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 7, k - 1)
				end
			else Result := ""
			end
		end
	getBestPaper(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<BESTPAPER>")
			then
				i := i_str.substring_index ("<BESTPAPER>", 1)
				k := i_str.substring_index ("</BESTPAPER>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 11, k - 1)
				end
			else Result := ""
			end
		end
	getMemberships(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<MEMBERSHIP>")
			then
				i := i_str.substring_index ("<MEMBERSHIP>", 1)
				k := i_str.substring_index ("</MEMBERSHIP>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 12, k - 1)
				end
			else Result := ""
			end
		end
	getPrizes(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<PRIZES>")
			then
				i := i_str.substring_index ("<PRIZES>", 1)
				k := i_str.substring_index ("</PRIZES>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 8, k - 1)
				end
			else Result := ""
			end
		end
	getIndustryColl(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<INDUSTRYCOLL>")
			then
				i := i_str.substring_index ("<INDUSTRYCOLL>", 1)
				k := i_str.substring_index ("</INDUSTRYCOLL>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 14, k - 1)
				end
			else Result := ""
			end
		end
	getOtherInfo(i_str: STRING): STRING
		local
			i,k: INTEGER
		do
			if
				i_str.has_substring ("<OTHER>")
			then
				i := i_str.substring_index ("<OTHER>", 1)
				k := i_str.substring_index ("</OTHER>", 1)
				if i_str.substring (i + 13, k - 1).is_equal ("null") then
					Result := ""
				else
					Result := i_str.substring (i + 7, k - 1)
				end
			else Result := ""
			end
		end
end
