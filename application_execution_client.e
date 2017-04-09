note
	description: "Summary description for {APPLICATION_EXECUTION_CLIENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION_EXECUTION_CLIENT

inherit
	APPLICATION_EXECUTION
create
	make
feature
	execute
	local
		www: WSF_FILE_SYSTEM_HANDLER
		page: WSF_HTML_PAGE_RESPONSE
		not_found: WSF_NOT_FOUND_RESPONSE
		mesg: WSF_RESPONSE_MESSAGE
	do
		create page.make

		print ("%NPATH: " + request.path_info +"%N")

		mesg := set_up_content(request.path_info)

		response.send (mesg)
	end

	on_text (ws: WEB_SOCKET; a_message: READABLE_STRING_8)
		local
			server_cmd:COMMANDS_CLIENT
			parser: DATA_CLIENT_PARSER
			db_helper: DB_HELPER
			admin_parser: DATA_ADMIN_PARSER
		do
			create server_cmd.send_message (ws, a_message,text_frame)
			create parser.make
			create db_helper.make
			create admin_parser.make

			if a_message.starts_with ("<QUERY1>") then
				ws.send (Text_frame, "SERVER_RESPONSE" + db_helper.query1(admin_parser.extract_q1 (a_message)))
--			--	print(db_helper.query1("2000"))
			elseif a_message.starts_with ("<QUERY2>") then
				ws.send (Text_frame, "SERVER_RESPONSE" + db_helper.query2 (admin_parser.extract_q2_unit (a_message) , admin_parser.extract_q2_year (a_message)))
			elseif a_message.starts_with ("<QUERY3>") then
				ws.send (Text_frame, "SERVER_RESPONSE" + db_helper.query3 (admin_parser.extract_q3_year1 (a_message), admin_parser.extract_q3_year2 (a_message)))
			end


			parser.parse_and_save(a_message)
--			-- CALL PARSER
			print("%N-------------"+a_message+"--------------%N")
		end
end


