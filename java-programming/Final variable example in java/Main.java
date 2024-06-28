public class Main
{
	public static void main(String[] args) {
	    final float PI=3.14f;
	    System.out.println("PI="+PI);
	    // error: cannot assign a value to final variable PI
	    PI=12.34f;
	    System.out.println("PI="+PI);
	}
}
