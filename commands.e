note
	description: "Summary description for {COMMANDS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMMANDS
feature--constructor
	send_message(web_socket:WEB_SOCKET;message:READABLE_STRING_32;frame:INTEGER)
	require
		empty_msg: message /= void
		empty_web_socket: web_socket /= void
	do
		ws := web_socket
		msg := message
		msg_frame:= frame
		parse_cmd
	end

feature{COMMANDS}
	ws:WEB_SOCKET
	msg:READABLE_STRING_32
	msg_frame:INTEGER

	parse_cmd
	deferred
	end
feature	{COMMANDS} --Exeption messages
	--cmd code from message doesn't exist
	not_found_cmd_exception
	do
		ws.put_error ("Cmd doesn't exist in message!!!")
		ws.send(msg_frame,"Cmd doesn't exist in message!!!")
	end
end
