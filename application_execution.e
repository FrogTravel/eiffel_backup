note
	description: "Summary description for {APPLICATION_EXECUTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	APPLICATION_EXECUTION

inherit
	WSF_WEBSOCKET_EXECUTION

	WEB_SOCKET_EVENT_I
feature -- Basic operations

	execute
 		deferred
		end


feature -- Websocket execution

	new_websocket_handler (ws: WEB_SOCKET): WEB_SOCKET_HANDLER
		do
			create Result.make (ws, Current)
		end

feature -- Websocket execution

	on_open (ws: WEB_SOCKET)
		do
			ws.put_error ("Connecting")
			ws.send (Text_frame, "Hello, this is a simple demo with Websocket using Eiffel. (/help for more information).%N")
		end

	on_binary (ws: WEB_SOCKET; a_message: READABLE_STRING_8)
		do
			ws.send (Binary_frame, a_message)
		end

	on_text (ws: WEB_SOCKET; a_message: READABLE_STRING_8)
		deferred
		end

	on_close (ws: WEB_SOCKET)
			-- Called after the WebSocket connection is closed.
		do
			ws.put_error ("Connection closed")
		end

feature
	set_up_content(path: STRING):WSF_RESPONSE_MESSAGE
		local
			mesg: WSF_RESPONSE_MESSAGE
			not_found: WSF_NOT_FOUND_RESPONSE
		do


			if path.starts_with ("/index.html") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type({HTTP_MIME_TYPES}.text_html, "eiffel_project/src/index.html")
			elseif path.starts_with ("/scripts") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.application_javascript, "eiffel_project/src" + path)
			elseif path.starts_with ("/css") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "eiffel_project/src/" + path)
			else
				create not_found.make (request)
					not_found.add_suggested_location (request.absolute_script_url (""), "Home", "Back to home page")

					mesg := not_found
			end

			Result := mesg
		end

end
