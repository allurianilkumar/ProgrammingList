class A{
    float a=100;
}
class B extends A{
    int b=50;
}
public class Main
{
	public static void main(String[] args) {
	    B b1=new B();
	    System.out.println(b1.a);
	    System.out.println(b1.b);
	}
}
