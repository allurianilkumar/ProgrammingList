
public class Main{
    static void birthday(int gift){ // gift is temp. arguments or formal arguments
        System.out.println("Happy Birthday="+gift);
    }
	public static void main(String[] args) {
	    int gift=1000;
		birthday(gift); // here gift is actual arguments
	}
}
