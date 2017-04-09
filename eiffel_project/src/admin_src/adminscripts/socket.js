var socket;

function connect(){

	var host = "ws://localhost:9090/adminindex.html";

	try{

		socket = new WebSocket(host);
		message(socket.readyState);
		socket.onopen = function(){
				message(socket.readyState);
			}
		socket.onmessage = function(msg){
				message(msg.data);
				send("test");
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
	if(~msg.toString().indexOf("SERVER_RESPONSE")){
		appendQuery(msg.toString().replace("SERVER_RESPONSE", ""));
		console.log("got response");
	}	
}//End message()

function send(text){
	message("Admin socket sending: " + text);

	try{
		socket.send(text);
		message(text)
	} catch(exception){
		message("exception");
	}

}