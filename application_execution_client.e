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
		do
			create server_cmd.send_message (ws, a_message,text_frame)
			create parser

			if a_message.starts_with ("query1") then
				ws.send (Text_frame, db_helper.query1 ("1995"))
			end

			parser.parse_and_save(a_message)
			-- CALL PARSER
			print("%N-------------"+a_message+"--------------%N")
		end
end


