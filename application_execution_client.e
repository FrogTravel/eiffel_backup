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
	--	if request.path_info.starts_with ("/") then
	--		create www.make ("src/html/index.html")
	--		www.execute ("src/html/index.html", request,response)
	--	end

		print ("%NPATH: " + request.path_info +"%N")
--		if request.path_info.starts_with ("/index.html") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type({HTTP_MIME_TYPES}.text_html, "eiffel_project/src/index.html")
--		elseif request.path_info.starts_with ("/script/socket.js") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.application_javascript, "src/scripts/socket.js")
--		elseif request.path_info.starts_with ("/script/main.js") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.application_javascript, "src/scripts/main.js")
--		elseif request.path_info.starts_with ("/script/initialization.js") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.application_javascript, "src/scripts/initialization.js")
--		elseif request.path_info.starts_with ("/script/dropdown.js") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.application_javascript, "src/scripts/dropdown.js")
--		elseif request.path_info.starts_with ("/script/data-collector.js") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.application_javascript, "src/scripts/data-collector.js")
--		elseif request.path_info.starts_with ("/script/newRowsAdder.js") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.application_javascript, "src/scripts/newRowsAdder.js")
--		elseif request.path_info.starts_with ("/css/dropdown.css") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "src/css/dropdown.css")
--		elseif request.path_info.starts_with ("/css/style.css") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "src/css/style.css")
--		elseif request.path_info.starts_with ("/css/jquery-ui.css") then
--			create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "src/css/jquery-ui.css")
--		else
--			create not_found.make (request)
--					not_found.add_suggested_location (request.absolute_script_url (""), "Home", "Back to home page")

--					mesg := not_found
--		end

		mesg := set_up_content(request.path_info)

		response.send (mesg)
	end

	on_text (ws: WEB_SOCKET; a_message: READABLE_STRING_8)
		local
			server_cmd:COMMANDS_CLIENT
		do
			create server_cmd.send_message (ws, a_message,text_frame)
			-- CALL PARSER
			print("%N-------------"+a_message+"--------------%N")
		end
end


