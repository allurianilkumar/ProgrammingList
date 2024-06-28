
public class Main{
    static int birthday(){ 
        int gift=1000;// here gift is local variable
        return gift+gift;
    }
	public static void main(String[] args) {
	    int visitingGift;
        visitingGift=birthday();
        System.out.println("visiting gift is "+visitingGift);
	}
}
