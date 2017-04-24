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
				PATENTS TEXT,
				IPLIC TEXT,
				BESTPAPER TEXT,
				MEMBERSHIP TEXT,
				PRIZES TEXT,
				INDUSTRYCOLL TEXT,
				OTHER TEXT
				);
				]"
		create db_insert_statement.make (query, db)
		db_insert_statement.execute
		db.close
		end

feature
		add_data (UNITNAME, UNITHEADNAME, REPORTSTARTDATE, REPORTENDDATE, COURSESTAUGHT, EXAMSADMIN, STUDENTSSUPERVISED, STUDENTREPORTS, PHDTHESES, GRANTSWON, RESEARCHPROJECTS, RESEARCHCOLL, CONFERENCEPUBL, JOURNALPUBL, PATENTS, IPLIC, BESTPAPER, MEMBERSHIP, PRIZES, INDUSTRYCOLL, OTHER: STRING)
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
			query.append (PATENTS)
			query.append("', '")
			query.append (IPLIC)
			query.append("', '")
			query.append (BESTPAPER)
			query.append("', '")
			query.append (MEMBERSHIP)
			query.append("', '")
			query.append (PRIZES)
			query.append("', '")
			query.append (INDUSTRYCOLL)
			query.append("', '")
			query.append (OTHER)
			query.append("');")
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			db.close
			end

feature
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
				if iterator.item.string_value (1).same_string ("00/00/00000") or iterator.item.string_value (1).same_string ("") or not year.is_integer then
					else
						if iterator.item.string_value (1).substring (iterator.item.string_value (1).index_of (' ', 4) + 1, iterator.item.string_value (1).index_of (' ', 4) + 4).to_integer  = year.to_integer then
						result := result + iterator.item.string_value (2) + "; " + iterator.item.string_value (3) + "%N"
					end
				end
				iterator.forth
			end
			if result.same_string("Conference publications; journal publications: " + "%N") then
				result := "Can't find the information!" + "%N"
			else
				result := result + "%N"
			end

		end

	query2(unit, years_number: STRING): STRING -- summary information about given unit in given number of years
    local
      year_start: INTEGER
   do
      create db.make_open_read_write ("Forms.db")
      create db_query.make ("SELECT UNITNAME, UNITHEADNAME, REPORTSTARTDATE, REPORTENDDATE, COURSESTAUGHT, EXAMSADMIN, STUDENTSSUPERVISED, STUDENTREPORTS, PHDTHESES, GRANTSWON, RESEARCHPROJECTS, RESEARCHCOLL, CONFERENCEPUBL, JOURNALPUBL FROM Project;", db)
      iterator := db_query.execute_new
      if iterator.item.string_value (3).same_string ("00/00/00000") then
      	year_start := -1
      	else  year_start := iterator.item.string_value (3).substring (iterator.item.string_value (3).index_of (' ', 4) + 1, iterator.item.string_value (3).index_of (' ', 4) + 4).to_integer
      end
      create result.make_empty
      result := ""
      from
        iterator.start
      until
        iterator.after
      loop
      	if iterator.item.string_value (3).same_string ("00/00/00000") or iterator.item.string_value (4).same_string ("00/00/0000") or iterator.item.string_value (3).same_string ("") or iterator.item.string_value (4).same_string ("") or not years_number.is_integer then
      	else
        if year_start + years_number.to_integer >= iterator.item.string_value (3).substring (iterator.item.string_value (3).index_of (' ', 4) + 1, iterator.item.string_value (3).index_of (' ', 4) + 4).to_integer and iterator.item.string_value (1).same_string (unit) then
          result := result + "Information about " + unit + " in " + iterator.item.string_value (3).substring (iterator.item.string_value (3).index_of (' ', 4) + 1, iterator.item.string_value (3).index_of (' ', 4) + 4) + " year:" + "%N"
          result := result + "Unit's head name: " + iterator.item.string_value (2)  + "%N"
          result := result + "Courses taught: " + iterator.item.string_value (5) + "%N"
          result := result + "Examinations: " + iterator.item.string_value (6) + "%N"
          result := result + "Students supervised: " + iterator.item.string_value (7) + "%N"
          result := result + "Completed student reports: " + iterator.item.string_value (8) + "%N"
          result := result + "Completed PhD theses: " + iterator.item.string_value (9) + "%N"
          result := result + "Grants: " + iterator.item.string_value (10) +  "%N"
          result := result + "Research projects: " + iterator.item.string_value (11) + "%N"
          result := result + "Research collaborations: " + iterator.item.string_value (12) + "%N"
          result := result + "Conference publications: " + iterator.item.string_value (13) + "%N"
          result := result + "Journal publications: " + iterator.item.string_value (14) + "%N" + "%N"
        end
        end
        iterator.forth
      end
      if result.same_string ("") then
        result := "There's no such information!" + "%N"
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
      if not start.is_integer or not the_end.is_integer then
      	 else
      day_start := start.substring (1, start.index_of ('/', 1) - 1).to_integer
      day_end := the_end.substring (1, the_end.index_of ('/', 1) - 1).to_integer
      m_start := start.substring (start.index_of ('/', 1) + 1, start.index_of ('/', 4) - 1).to_integer
      m_end := the_end.substring (the_end.index_of ('/', 1) + 1, the_end.index_of ('/', 4) - 1).to_integer
      year_start := start.substring (start.index_of ('/', 4) + 1, start.index_of ('/', 4) + 4).to_integer
      year_end := the_end.substring (the_end.index_of ('/', 4) + 1, the_end.index_of ('/', 4) + 4).to_integer
      	end
      create result.make_empty
      result := "Courses taught between " + start + " and " + the_end + ":" + "%N"
      from
        iterator.start
      until
        iterator.after
      loop
      	if iterator.item.string_value (1).same_string ("") or iterator.item.string_value (1).same_string ("00/00/00000") or iterator.item.string_value (2).same_string ("") or iterator.item.string_value (2).same_string ("00/00/0000") then
      		else
        if iterator.item.string_value (1).substring (iterator.item.string_value (1).index_of (' ', 4) + 1, iterator.item.string_value (1).index_of (' ', 4) + 4).to_integer >= year_start then
          if iterator.item.string_value (2).substring (iterator.item.string_value (2).index_of (' ', 4) + 1, iterator.item.string_value (2).index_of (' ', 4) + 4).to_integer <= year_end then
            result := result + iterator.item.string_value (3) + ", "
            else
        if iterator.item.string_value (1).substring (iterator.item.string_value (1).index_of (' ', 1) + 1, iterator.item.string_value (1).index_of (' ', 4) - 1).to_integer >= m_start then
        if iterator.item.string_value (1).substring (1, iterator.item.string_value (1).index_of (' ', 1) - 1).to_integer >= day_start then
        if iterator.item.string_value (2).substring (iterator.item.string_value (2).index_of (' ', 1) + 1, iterator.item.string_value (2).index_of (' ', 4) - 1).to_integer <= m_end then
        if iterator.item.string_value (2).substring (1, iterator.item.string_value (2).index_of (' ', 1) - 1).to_integer <= day_end then
          result := result + iterator.item.string_value (3) + ", "
        end
        end
        end
        end
        end
        end
        end
        iterator.forth
      end
      if result.same_string("Courses taught between " + start + " and " + the_end + ":" + "%N") then
        result := "There's no such information!"
      else
      result := result.substring (1, result.count - 2) + "%N"
      end
    end

    query4(name: STRING):STRING --number of supervised students
    local
    	number: INTEGER
    do
    	create db.make_open_read_write ("Forms.db")
      	create db_query.make ("SELECT UNITNAME, STUDENTSSUPERVISED FROM Project;", db)
     	iterator := db_query.execute_new
     	create result.make_empty
     	number := 0
     	result := "Number of supervised students by " + name + ": " + "%N"
     	from
        	iterator.start
      	until
       		iterator.after
      	loop
      		if iterator.item.string_value (1).same_string (name) then
				number := number + iterator.item.string_value (2).occurrences ('<')
      		end
      		iterator.forth
      	end
      	result := result + number.out
    end

    query5(name: STRING):STRING --number of research collaborations
    local
    	number: INTEGER
    do
    	create db.make_open_read_write ("Forms.db")
      	create db_query.make ("SELECT UNITNAME, RESEARCHCOLL FROM Project;", db)
     	iterator := db_query.execute_new
     	create result.make_empty
     	number := 0
     	result := "Number of research collaborations by " + name + ": " + "%N"
     	from
        	iterator.start
      	until
       		iterator.after
      	loop
      		if iterator.item.string_value (1).same_string (name) then
				number := number + iterator.item.string_value (2).occurrences ('<')
      		end
      		iterator.forth
      	end
      	result := result + number.out
    end

    query6(name: STRING): STRING --examinations by a given unit
		do
			create db.make_open_read_write ("Forms.db")
			create db_query.make ("SELECT UNITNAME, EXAMSADMIN FROM Project;", db)
			iterator := db_query.execute_new
			create result.make_empty
			result := "Examinations by " + name + ":" + "%N"
			from
				iterator.start
			until
				iterator.after
			loop
				if iterator.item.string_value (1).same_string (name) and not iterator.item.string_value (2).same_string ("") then
					result := result + iterator.item.string_value (2) + "%N"
				end
				iterator.forth
			end
			if result.same_string("Examinations by " + name + ":" + "%N") then
				result := "Can't find the information!" + "%N"
			else
				result := result + "%N"
			end
		end

	query7(name: STRING): STRING --prizes by a given unit
		do
			create db.make_open_read_write ("Forms.db")
			create db_query.make ("SELECT UNITNAME, PRIZES FROM Project;", db)
			iterator := db_query.execute_new
			create result.make_empty
			result := name + "'s prizes:" + "%N"
			from
				iterator.start
			until
				iterator.after
			loop
				if iterator.item.string_value (1).same_string (name) and not iterator.item.string_value (2).same_string ("") then
					result := result + iterator.item.string_value (2) + "%N"
				end
				iterator.forth
			end
			if result.same_string(name + "'s prizes:" + "%N") then
				result := "Can't find the information!" + "%N"
			else
				result := result + "%N"
			end
		end
end
