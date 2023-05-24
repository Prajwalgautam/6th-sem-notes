import java.net.*;
import java.io.*;

public class UDPServer
{

	public static void main(String args[])
	{
		DatagramSocket socket=null;
		byte[] buffer=new byte[1000];
		try
		{
			socket = new DatagramSocket(8888);
			while(true)
			{
				buffer=new byte[1000];
				System.out.println("Server waiting for message");
				DatagramPacket request = new DatagramPacket(buffer,buffer.length);
				socket.receive(request);

				System.out.println("message from client:"+ new String(request.getData(),0,request.getLength()));
				DatagramPacket reply= new DatagramPacket(request.getData(),request.getLength(),request.getAddress(),request.getPort());
				socket.send(reply);
				System.out.println("message replied to client");
			}
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}