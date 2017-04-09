var socket;

function connect(){

	var host = "ws://localhost:9090/adminindex.html";
	console.log(host);
	try{

		socket = new WebSocket(host);
		message(socket.readyState);
		socket.onopen = function(){
				message(socket.readyState);
			}
		socket.onmessage = function(msg){
				message(msg.data);
				send("test admin");
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

function send(text){
	message("Admin socket!!!");

	try{
		socket.send(text);
		message(text)
	} catch(exception){
		message("exception");
	}

}