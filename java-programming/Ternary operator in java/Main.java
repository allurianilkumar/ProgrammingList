/******************************************************************************

Ternary operator or condition operator(?:):
-------------------------------------------

1 ) variable = condition? truepart:falsepart;
Ex:
    int a=10,b=20,n=100,result;
    result = (n%2 == 0)? (a+b): (a*b);
    System.out.println(result);
    
*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
	    int a=10,b=20,n=101,result;
        result = (n%2 == 0)? (a+b): (a*b);
        System.out.println("Result: "+result);
	}
}


