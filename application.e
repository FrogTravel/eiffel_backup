note
	description: "server_app application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make_and_launch

feature {NONE} -- Initialization


--		local
--			l_launcher: WSF_STANDALONE_WEBSOCKET_SERVICE_LAUNCHER [APPLICATION_EXECUTION]
--			opts: WSF_STANDALONE_WEBSOCKET_SERVICE_OPTIONS
--		do
--		--	create opts
----			if opts.is_secure_connection_supported then
----				opts.is_secure := True
----				opts.set_secure_protocol_to_tls_1_2
----				opts.secure_certificate := "ca.crt"
----				opts.secure_certificate_key := "ca.key"
----			end

--			--opts.import_ini_file_options ("ws.ini")
--		--	create l_launcher.make_and_launch (opts)
--		end

		make_and_launch
		local
			client: WSF_STANDALONE_WEBSOCKET_SERVICE_LAUNCHER [APPLICATION_EXECUTION_CLIENT]
		--	admin: WSF_STANDALONE_WEBSOCKET_SERVICE_LAUNCHER [APPLICATION_EXECUTION_ADMIN]
			client_opts: WSF_STANDALONE_WEBSOCKET_SERVICE_OPTIONS
		--	admin_opts: WSF_STANDALONE_WEBSOCKET_SERVICE_OPTIONS
		do
			create client_opts
		--	create admin_opts

		--	client_opts.import_ini_file_options ("meta/client.ini")
			client_opts.import_ini_file_options ("ws.ini")
		--	admin_opts.import_ini_file_options ("meta/admin.ini")

			create client.make_and_launch (client_opts)
		--	create admin.make_and_launch (admin_opts)
		end
end
