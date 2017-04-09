$(document).ready(function() {
	console.log("Document Ready!!! 7");
	var socket;


	connect();

	function connect(){

			var host = "ws://localhost:9090/index.html";

			try{

				socket = new WebSocket(host);
				message(socket.readyState);
				socket.onopen = function(){
						message(socket.readyState);
					}
				socket.onmessage = function(msg){
						message(msg.data);
						send();
					}
				socket.onclose = function(){
						message(socket.readyState);
					}
			} catch(exception){
				message(exception);
			}
	}

	function message(msg){
		console.log(msg);
	}//End message()

	function send(){
		var text = "first socket info";
		message("Trying to send data!!!");
		
		try{
			socket.send(text);
			message(text)
		} catch(exception){
			message("exception");
		}
		
	}

});