class A{
    // error: car() in B cannot override car() in A
    final void car(){
        System.out.println("Super car");
    }
}
class B extends A{
    void car(){
        System.out.println("Sub car");
    }
}
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
	}
}
