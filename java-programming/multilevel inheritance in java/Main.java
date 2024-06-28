class A{
    int a=200;
}
class B extends A{
    int b=100;
}
class C extends B{
    int c=50;
}
public class Main
{
	public static void main(String[] args) {
	    C c1=new C();
	    System.out.println(c1.a);
	    System.out.println(c1.b);
	    System.out.println(c1.c);
	    A a1=new A();
	    System.out.println(a1.a);
	    //System.out.println(a1.c); // Main.java:19: error: cannot find symbol
	}
}

