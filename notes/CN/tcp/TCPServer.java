import java.net.*;
import java.io.*;

public class TCPServer
{
	public static void main(String[] args) {
		try{
			int serverPort=7896;
			ServerSocket listenSocket = new ServerSocket(serverPort);
			while (true) {
				Thread.sleep(5000);
				Socket clientSocket= listenSocket.accept();
				Connection c = new Connection(clientSocket);
			}
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}

	}
}

class Connection extends Thread
{
	DataInputStream in;
	DataOutputStream out;
	Socket clientSocket;
	public Connection(Socket aClientSocket)
	{
		try{
			clientSocket = aClientSocket;
			in = new DataInputStream(clientSocket.getInputStream());
			out = new DataOutputStream(clientSocket.getOutputStream());
			this.start();

		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
	public void run()
	{
		try
		{
			byte msg[]=new byte[1000];
			int len = in.read(msg);
			System.out.println(new String(msg,0,len));
			out.writeUTF(new String(msg,0,len));
		}
		catch(Exception e){
			e.printStackTrace();
		}
	}
}