public class Main
{
    int rank=1; // Non-Static property
    static int data=100; // static property
    void showRank(){
        System.out.println("My rank is "+rank);
    }
    void show(){
        System.out.println(data);
    }
    static  void info(){
        System.out.println(data);
    }
	public static void main(String[] args) {
		//System.out.println(data);
		Main m1=new Main();
		// calling non-static method
		m1.showRank();
		// Non-Static method shoud be call only reference.
		m1.show();
		// static method call directly wihtin the class
		info();
		// ClassName.StaticMethod();
		Main.info();
		// instance.StaticMethod();
		m1.info();
	}
}

