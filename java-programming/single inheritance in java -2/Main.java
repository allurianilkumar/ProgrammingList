class A{
    static int a=100;
    void show(){
        System.out.println(a);
    }
}
public class Main extends A{
	public static void main(String[] args) {
 		System.out.println("Hello World");
 		System.out.println(a);
 		System.out.println(Main.a);
 		Main m1=new Main();
 		System.out.println(m1.a);
		// calling a mehtod
		m1.show();
	}
}
