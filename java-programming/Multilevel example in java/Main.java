class GrandFather {
    void jet(){
        System.out.println("Jet");
    }
}
class Father extends GrandFather {
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
		c.jet();
		c.car();
		c.bicyle();
	}
}
