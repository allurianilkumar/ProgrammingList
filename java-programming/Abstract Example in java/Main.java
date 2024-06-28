abstract class Bike{
   abstract void run();
 }

class Honda4 extends Bike{
 void run(){
     System.out.println("running safely..");
 }
}
public class Main
{
	public static void main(String[] args) {
	    //Bike obj=new Bike();// Main.java:13: error: Bike is abstract; cannot be instantiated
	    // Honda4 obj=new Honda4(); valid
	    Bike obj=new Honda4(); //valid
	    // Honda4 obj=new Bike(); // error: Bike is abstract; cannot be instantiated
	    obj.run();
	}
}

