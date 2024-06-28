// calling from Default constructor to parameterized constructor
class A{
    A(){
        this(100); //error: recursive constructor invocation
        System.out.println("Default constructor");
        // this(100); // error: call to this must be first statement in constructor
    }
    A(int a){
        System.out.println("parameterized constructor");
        System.out.println(a);
    }
}
public class Main
{
	public static void main(String[] args) {
		System.out.println("Main method");
		new A();
	}
}

