public class Main
{
    
    static int id;
    String name;
	public static void main(String[] args) {
	    id=101;
		System.out.println("Direct: "+id);
		// 4. 
		System.out.println("via clasname: "+Main.id);
		// error: non-static variable name cannot be referenced from a static context
		// .. System.out.println(name);
		Main m1=new Main();
		// 3. 
		m1.name = "MOM";
		System.out.println(m1.name);
		// 5. instace can access static or non static property
		System.out.println(m1.id);
		// 6. static property is a comman property for any instance
		Main m2=new Main();
		System.out.println("Static Propety:"+m2.id);
		m2.id = 102;
		System.out.println("1.Static Propety:"+m1.id); // 102
		System.out.println("2.Static Propety:"+m2.id); // 102
	}
}
