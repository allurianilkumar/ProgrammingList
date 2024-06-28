class Father {
    void car(){
        System.out.println("Car");
    }
}
class Child extends Father{
    void bicyle(){
        System.out.println("Bicyle");
    }
}
public class Main{
	public static void main(String[] args) {
		Child c=new Child();
		c.car();
		c.bicyle();
	}
}
