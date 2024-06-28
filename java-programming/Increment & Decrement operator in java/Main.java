/******************************************************************************

Increment operator(++) and decrement operator(--):

Increment operator:(Means : +1)
Symbol: (++)
a) preinrement(++i): i=i+1;
b) postincrement(i++): i=i+1;

decrement operator:(Means: -1)
Symbol: (--)
a) predecrement(--i): i=i-1;
b) postdecrement(i--): i=i-1;


*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
		int i=10;
		System.out.println("i = "+i); // 10
		System.out.println("++i = "+(++i)); // 11
		System.out.println("i = "+i); // 11
		
		System.out.println("i++ = "+(i++)); // 11
		System.out.println("i = "+i); // 12
		
		System.out.println("--i = "+(--i)); // 11
		System.out.println("i = "+i); // 11
		
		System.out.println("i-- = "+(i--)); // 11
		System.out.println("i = "+i); // 10
	}
}



