note
	description: "Summary description for {DATA_CLIENT_PARSER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DATA_CLIENT_PARSER
inherit
	ARGUMENTS


feature {NONE} -- Initialization

	make
		local
			i_string: STRING
			check_string: STRING
		do
--			create check_string.make_empty
--			Io.read_line
--			i_string := Io.last_string
--			check_string := i_string.substring (1, 6)
--			if
--				check_string.is_equal ("<USERP")
--			then
--				i_string := i_string.substring (11, i_string.count)
--				from
--				until
--					i_string.is_equal ("</USERPAGE>")
--				loop
--					i_string := extract_info(i_string)
--				end
--			end
		end


feature
	parse_and_save(info: STRING)
	local
		i_string: STRING
		check_string: STRING
		db_helper: DB_HELPER
	do
		create check_string.make_empty
		create db_helper.make
		i_string := info
		check_string := i_string.substring (1, 6)
		if
			check_string.is_equal ("<USERP")
		then
			i_string := i_string.substring (11, i_string.count)
			from
			until
				i_string.is_equal ("</USERPAGE>")
			loop
				i_string := extract_info(i_string)
			end
		end


	end

feature --extracting information

	extract_info (str_i: STRING): STRING
		local
			s, str:STRING
			a,b:INTEGER
		do
			create s.make_empty
			create str.make_empty
			str := str_i.twin
			s := str.substring (1, 10)
			if								-- UNITNAME
				s.is_equal ("<UNITNAME>")
			then
				str := str.substring (11, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--UNITHEADNAME
				s.is_equal ("<UNITHEADN")
			then
				str := str.substring (15, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--REPORTSTARTDATE
				s.is_equal ("<REPORTSTA")
			then
				str := str.substring (18, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--REPORTENDDATE
				s.is_equal ("<REPORTEND")
			then
				str := str.substring (16, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--COURSESTAUGHT
				s.is_equal ("<COURSESTA")
			then
				str := str.substring (16, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--EXAMSADMIN
				s.is_equal ("<EXAMSADMI")
			then
				str := str.substring (13, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--STUDENTSSUPERVISED
				s.is_equal ("<STUDENTSS")
			then
				str := str.substring (21, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--STUDENTREPORTS
				s.is_equal ("<STUDENTRE")
			then
				str := str.substring (17, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--PHDTHESES
				s.is_equal ("<PHDTHESES")
			then
				str := str.substring (12, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--GRANTSWON
				s.is_equal ("<GRANTSWON")
			then
				str := str.substring (12, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--RESEARCHPROJECTS
				s.is_equal ("<RESEARCHP")
			then
				str := str.substring (19, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--RESEARCHCOLL
				s.is_equal ("<RESEARCHC")
			then
				str := str.substring (15, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--CONFERENCEPUBL
				s.is_equal ("<CONFERENC")
			then
				str := str.substring (17, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			if								--JOURNALPUBL
				s.is_equal ("<JOURNALPU")
			then
				str := str.substring (14, str.count)
				a := str.index_of ('<', 1)
				b := str.index_of ('>', 1)
				s := str.substring (1, a-1)
				str := str.substring (b+1, str.count)
				Io.put_string (s)
				Io.put_string("%N")
			end
			Result := str
		end
end
