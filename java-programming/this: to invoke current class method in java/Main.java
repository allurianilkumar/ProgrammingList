
public class Main
{
    void m(){
        System.out.println("m() method");
    }
    void n(){
        System.out.println("n() method");
        // calling the m() method
        m(); // this.m();
    }
	public static void main(String[] args) {
		System.out.println("main() method");
		//new Main().n();
		Main m1=new Main(); // m1 is instance or reference of a currant class
		// calling n() method
		m1.n();
	}
}
