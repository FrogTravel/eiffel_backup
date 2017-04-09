note
	description: "Summary description for {COMMANDS_CLIENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMANDS_CLIENT
inherit
	COMMANDS
create
	send_message
feature
	parse_cmd
	do
--			if msg.starts_with ("<General>")  then send_to_db(create {DATA_GENERAL}.make (msg))
--		elseif msg.starts_with ("<Teaching>") then send_to_db(create {DATA_TEACHING}.make (msg))
--		elseif msg.starts_with ("<Research>") then send_to_db(create {DATA_RESEARCH}.make (msg))
--		elseif msg.starts_with ("<TechnologyTransfer>") then send_to_db(create {DATA_TECHNOLOGY_TRANSFER}.make (msg))
--		elseif msg.starts_with ("<Distinctions>")       then send_to_db(create {DATA_DISTINCTIONS}.make (msg))
--		elseif msg.starts_with ("<OutsideActivities>")  then send_to_db(create {DATA_COLLOBORATIONS}.make (msg))
--		else
--			not_found_cmd_exception
--		end
		print("%NHere we will parse all info %N")
	end
feature {COMMANDS}
--	send_to_db(data:DATA)
	send_to_db
	require
	--	emty_data: data /= void
	do
		--data.send_to_db ("DATA BASE")
		print("%NHere we will send to DB%N")
	end
end

