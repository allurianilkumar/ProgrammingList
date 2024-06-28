class GrandFather {
    void jet(){
        System.out.println("Jet");
    }
}
class Father1 extends GrandFather {
    void car(){
        System.out.println("Car");
    }
}
class Father2 extends GrandFather{
    void bicyle(){
        System.out.println("Bicyle");
    }
}
public class Main{
	public static void main(String[] args) {
	    System.out.println("Father1");
	    // Father1
		Father1 f1=new Father1();
		f1.jet();
		f1.car();
        System.out.println("Father2");
		// Father 2
		Father2 f2=new Father2();
		f2.jet();
		f2.bicyle();
	}
}
