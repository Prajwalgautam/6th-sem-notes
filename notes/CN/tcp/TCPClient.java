import java.net.*;
import java.io.*;

public class TCPClient
{
	public static void main(String args[])
	{
		Socket s=null;
		try
		{
			String serverIp = "192.168.1.7";
			int serverPort = 7896;

			s=new Socket(serverIp,serverPort);
			DataInputStream in = new DataInputStream(s.getInputStream());
			DataOutputStream out = new DataOutputStream(s.getOutputStream());

			out.writeUTF("This is test message 1");
			out.writeUTF("This is test message2");
			
			String data =in.readUTF();
			System.out.println("Received:"+ data);
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
		finally{
			if(s!=null)
			{
				//s.close();
			}
		}
	}
}