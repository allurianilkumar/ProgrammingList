class A{
    int a=200;
}
class B extends A{
    int b=100;
}

class C extends A{
    int c=50;
}
public class Main
{
	public static void main(String[] args) {
	    B b1=new B();
	    System.out.println(b1.a);
	    System.out.println(b1.b);
	    //System.out.println(b1.c); //error: cannot find symbol
	    C c1=new C();
	    System.out.println(c1.a);
	    System.out.println(c1.c);
	    //System.out.println(c1.b);//error: cannot find symbol
	}
}

