/******************************************************************************

if(condition):


Syntax:

    if(condition){
        statements or True Part
    }
    --> single statement {,} are optional.
    --> Multiple statements {,} are mandatory.
    
*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
		int a=1,b=10;
        if(a>b){
            System.out.println("True: A<B");
            System.out.println("DONE");
        }
        if(a+9==b)
            System.out.println("TRUE: A+9 == B");
		
	}
}
