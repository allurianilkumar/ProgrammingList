/******************************************************************************

Compound Assignment operator: +=, -=, *=, /=, %=

Example:
            int a=1;
            a+=1; // a=a+1;
            a-=1; // a=a-1;
            a*=1; // a=a*1;
            a/=1; // a=a/1;
            a%=1; // a=a%1;
*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
	    int a=1;
        a+=1; // a=a+1;
        System.out.println("a+=1 : "+a); //2
        a-=1; // a=a-1;
        System.out.println("a-=1 : "+a); //1
        a*=1; // a=a*1;
        System.out.println("a*=1 : "+a); //1
        a/=1; // a=a/1;
        System.out.println("a/=1 : "+a); // 1
        a%=1; // a=a%1;
		System.out.println("a%=1 : "+a); // 0
	}
}

