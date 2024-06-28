
public class Main{
    static int birthday(int gift){ // gift is temp. arguments or formal arguments
        return gift+gift;
    }
	public static void main(String[] args) {
	    int gift=1000,doubleGift;
		doubleGift = birthday(gift); // here gift is actual arguments
		System.out.println("Double Gift is "+doubleGift);
	}
}
