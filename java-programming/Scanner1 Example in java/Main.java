//import java.util.*; // we can acces all class & interface in util package.
//import java.util.Scanner; // Scanner class only access in util package.

public class Main
{
	public static void main(String[] args) {
	    int sid;
	    String sname;
	    
	    //Scanner sc=new Scanner(System.in);
	    
	    // using fully qualified name  
	    java.util.Scanner sc=new java.util.Scanner(System.in);
	    
		System.out.println("Enter SID:");
		sid=sc.nextInt();
		
		System.out.println("Enter SName:");
		sname = sc.next();
		
		System.out.println("SID:"+sid);
		System.out.println("SNAME:"+sname);
	}
}
