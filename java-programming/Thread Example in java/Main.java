
public class Main extends Thread{

	public Main(String name) {
		super(name);
	}
	public void run(){
		try{
			System.out.println("Running Thread is "+getName());
			Thread.sleep(2000);
		}catch(Exception e){
			System.out.println(e);
		}
		
	}
	@SuppressWarnings("deprecation")
	public static void main(String[] args) {
		// Super Class Used by Thread Class
		Thread t1=new Thread("MOM");
		System.out.println("Thread1 Start the "+t1.getName());
		t1.start();
		
		// Sub Class used by Thread Class
		Main t2=new Main("DAD");
		System.out.println("Thread2 First is Alive "+t2.isAlive());
		System.out.println("Thread2 Start the "+t2.getName());
		System.out.println("Thread2 Priority the "+t2.getPriority());
		t2.start();
		
		Main t3=new Main("SON");
		System.out.println("Thread3 Start the "+t3.getName());
		t3.start();
		// Tread destroy
		
		System.out.println("Thread2 Last is Alive "+t2.isAlive());
	}

}
