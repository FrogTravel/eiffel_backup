note
	description: "Summary description for {DATA_ADMIN_PARCER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DATA_ADMIN_PARSER

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.

		do

		end
feature

	extract_q1(str: STRING): STRING
		do
			Result := str.substring (str.substring_index ("<QUERY1>", 1) + 8, str.substring_index ("</QUERY1>", 1)-1)
		end

	extract_q2_unit(str: STRING): STRING
		do
			Result := str.substring (str.substring_index ("<QUERY2>", 1) + 8, str.index_of (' ', 1) - 1)
		end
	extract_q2_year(str: STRING): STRING
		do
			Result := str.substring (str.index_of (' ', 1)+1, str.substring_index ("</QUERY2>", 1) - 1)
		end

	extract_q3_year1(str: STRING): STRING
		do
			Result := str.substring (str.substring_index ("<QUERY3>", 1) + 8, str.index_of (' ', 1) - 1)
		end
	extract_q3_year2(str: STRING): STRING
		do
			Result := str.substring (str.index_of (' ', 1)+1, str.substring_index ("</QUERY3>", 1) - 1)
		end
	extract_q4(str: STRING): STRING
		do
			Result := str.substring (str.substring_index ("<QUERY4>", 1) + 8, str.substring_index ("</QUERY4>", 1)-1)
		end
	extract_q5(str: STRING): STRING
		do
			Result := str.substring (str.substring_index ("<QUERY5>", 1) + 8, str.substring_index ("</QUERY5>", 1)-1)
		end
	extract_q6(str: STRING): STRING
		do
			Result := str.substring (str.substring_index ("<QUERY6>", 1) + 8, str.substring_index ("</QUERY6>", 1)-1)
		end
	extract_q7(str: STRING): STRING
		do
			Result := str.substring (str.substring_index ("<QUERY7>", 1) + 8, str.substring_index ("</QUERY7>", 1)-1)
		end
end

