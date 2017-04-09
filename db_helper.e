note
	description: "Summary description for {DB_HELPER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DB_HELPER

create
	make

feature	--Attributes
	db: SQLITE_DATABASE
	db_insert_statement: SQLITE_INSERT_STATEMENT
	query: STRING
	db_query: SQLITE_QUERY_STATEMENT
	iterator: SQLITE_STATEMENT_ITERATION_CURSOR

feature {NONE} -- Initialization

	make
		do
			create_db
--			add_data ("", "", "13.05.1998", "13.12.1998", "Baekhyun", "", "", "", "", "", "", "", "Kpop", "EXO", "")
--			add_data ("Jikook", "Alina", "31.05.1998", "31.08.1998", "Jimin", "something", "any", "Jungkook", "no", "not_today", "SF9", "bye", "Kpop", "BTS", "")
--			add_data ("Jikook", "", "13.05.2000", "13.09.2008", "Bobby", "no", "hyung", "or", "oppa", "", "", "", "Kpop", "iKON", "")
--			print(query1("2000"))
--			print(query2("Jikook", "5"))
--			print(query3 ("30.05.1998", "31.08.1999"))
		end

	feature

		create_db
		do
		create db.make_create_read_write ("Forms.db")
		query := "[
				CREATE TABLE IF NOT EXISTS Project(
				UNITNAME TEXT NOT NULL,
				UNITHEADNAME TEXT NOT NULL,
				REPORTSTARTDATE	TEXT,
				REPORTENDDATE TEXT,
				COURSESTAUGHT TEXT NOT NULL,
				EXAMSADMIN TEXT NOT NULL,
				STUDENTSSUPERVISED TEXT NOT NULL,
				STUDENTREPORTS TEXT NOT NULL,
				PHDTHESES TEXT,
				GRANTSWON TEXT NOT NULL,
				RESEARCHPROJECTS TEXT NOT NULL,
				RESEARCHCOLL TEXT,
				CONFERENCEPUBL TEXT,
				JOURNALPUBL	TEXT,
				USERPAGE TEXT
				);
				]"
		create db_insert_statement.make (query, db)
		db_insert_statement.execute
		db.close
		end

		add_data (UNITNAME, UNITHEADNAME, REPORTSTARTDATE, REPORTENDDATE, COURSESTAUGHT, EXAMSADMIN, STUDENTSSUPERVISED, STUDENTREPORTS, PHDTHESES, GRANTSWON, RESEARCHPROJECTS, RESEARCHCOLL, CONFERENCEPUBL, JOURNALPUBL, USERPAGE: STRING)
			do
			create db.make_open_read_write ("Forms.db")
			query := "INSERT INTO Project VALUES('"
			query.append (UNITNAME)
			query.append("', '")
			query.append (UNITHEADNAME)
			query.append("', '")
			query.append (REPORTSTARTDATE)
			query.append("', '")
			query.append (REPORTENDDATE)
			query.append("', '")
			query.append (COURSESTAUGHT)
			query.append("', '")
			query.append (EXAMSADMIN)
			query.append("', '")
			query.append (STUDENTSSUPERVISED)
			query.append("', '")
			query.append (STUDENTREPORTS)
			query.append("', '")
			query.append (PHDTHESES)
			query.append("', '")
			query.append (GRANTSWON)
			query.append("', '")
			query.append (RESEARCHPROJECTS)
			query.append("', '")
			query.append (RESEARCHCOLL)
			query.append("', '")
			query.append (CONFERENCEPUBL)
			query.append("', '")
			query.append (JOURNALPUBL)
			query.append("', '")
			query.append (USERPAGE)
			query.append("');")
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			db.close
			end

		query1(year: STRING): STRING --all publications in a given year
		do
			create db.make_open_read_write ("Forms.db")
			create db_query.make ("SELECT REPORTSTARTDATE, CONFERENCEPUBL, JOURNALPUBL FROM Project;", db)
			iterator := db_query.execute_new
			create result.make_empty
			result := "Conference publications; journal publications: " + "%N"
			from
				iterator.start
			until
				iterator.after
			loop
				if iterator.item.string_value (1).substring (7, 10).to_integer = year.to_integer then
				result := result + iterator.item.string_value (2) + "; " + iterator.item.string_value (3) + "%N"
				end
				iterator.forth
			end
			result := result + "%N"
		end

		query2(unit, years_number: STRING): STRING --summary information about given unit in given number of years
		local
			year_start: INTEGER
		do
			create db.make_open_read_write ("Forms.db")
			create db_query.make ("SELECT UNITNAME, UNITHEADNAME, REPORTSTARTDATE, REPORTENDDATE, COURSESTAUGHT, EXAMSADMIN, STUDENTSSUPERVISED, STUDENTREPORTS, PHDTHESES, GRANTSWON, RESEARCHPROJECTS, RESEARCHCOLL, CONFERENCEPUBL, JOURNALPUBL FROM Project WHERE UNITNAME = '" + unit + "';", db)
			iterator := db_query.execute_new
			year_start := iterator.item.string_value (3).substring (7, 10).to_integer
			create result.make_empty
			result := ""
			from
				iterator.start
			until
				iterator.after
			loop
				if (year_start + years_number.to_integer) >= iterator.item.string_value (3).substring (7, 10).to_integer then
					result := result + "Information about " + unit + " in " + iterator.item.string_value (3).substring (7, 10) + " year:" + "%N"
					result := result + "Unit's head name: " + iterator.item.string_value (2) + ";" + "%N"
					result := result + "Courses taught: " + iterator.item.string_value (5) + ";" + "%N"
					result := result + "Examinations: " + iterator.item.string_value (6) + ";" + "%N"
					result := result + "Students supervised: " + iterator.item.string_value (7) + ";" + "%N"
					result := result + "Completed student reports: " + iterator.item.string_value (8) + ";" + "%N"
					result := result + "Completed PhD theses: " + iterator.item.string_value (9) + ";" + "%N"
					result := result + "Grants: " + iterator.item.string_value (10) + ";" + "%N"
					result := result + "Research projects: " + iterator.item.string_value (11) + ";" + "%N"
					result := result + "Research collaborations: " + iterator.item.string_value (12) + ";" + "%N"
					result := result + "Conference publications: " + iterator.item.string_value (13) + ";" + "%N"
					result := result + "Journal publications: " + iterator.item.string_value (14) + "." + "%N" + "%N"
				end
				iterator.forth
			end
		end

		query3(start, the_end: STRING): STRING --courses between two dates
		local
			day_start: INTEGER
			day_end: INTEGER
			m_start: INTEGER
			m_end: INTEGER
			year_start: INTEGER
			year_end: INTEGER
		do
			create db.make_open_read_write ("Forms.db")
			create db_query.make ("SELECT REPORTSTARTDATE, REPORTENDDATE, COURSESTAUGHT FROM Project;", db)
			iterator := db_query.execute_new
			day_start := start.substring (1, 2).to_integer
			day_end := the_end.substring (1, 2).to_integer
			m_start := start.substring (4, 5).to_integer
			m_end := the_end.substring (4, 5).to_integer
			year_start := start.substring (7, 10).to_integer
			year_end := the_end.substring (7, 10).to_integer
			create result.make_empty
			result := "Courses taught between " + start + " and " + the_end + ":" + "%N"
			from
				iterator.start
			until
				iterator.after
			loop
				if iterator.item.string_value (1).substring (1, 2).to_integer >= day_start
				and iterator.item.string_value (1).substring (4, 5).to_integer >= m_start
				and iterator.item.string_value (1).substring (7, 10).to_integer >= year_start
				and iterator.item.string_value (2).substring (1, 2).to_integer <= day_end
				and iterator.item.string_value (2).substring (4, 5).to_integer <= m_end
				and iterator.item.string_value (2).substring (7, 10).to_integer <= year_end then
					result := result + iterator.item.string_value (3) + ", "
				end
				iterator.forth
			end
			result := result.substring (1, result.count - 2) + "%N"
		end
end

