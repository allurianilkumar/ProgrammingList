import java.io.IOException;


class MOMException extends Exception{
	public MOMException(String msg){
		super(msg);
	}
}
public class Main{
	public static void show()throws Exception{
		
	}
// throws Error:  public static void main(String[] args){
	public static void main(String[] args)throws Exception{
		show();
		// try catch
		try{
//			int data=10/10;
//			int data=10/0;
//			String data=null;
			String data="MOM";
			System.out.println(data.length());
//			throw new IOException("sorry device error");
			throw new MOMException("This is my own exception-1");
		}catch(ArithmeticException arthExc){
//			System.out.println(arthExc);
			System.out.println("ArithmeticException Message:"+arthExc.getMessage());
		}catch(NullPointerException nullExc){
			System.out.println(nullExc);
			System.out.println("ArithmeticException Message:"+nullExc.getMessage());
		}catch(Exception e){
			System.out.println(e);
			System.out.println("Exception Message:"+e.getMessage());
		}
		finally{
			System.out.println("Finall black executed with/without error");
		}
	}
}
