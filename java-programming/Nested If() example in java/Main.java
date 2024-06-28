/*
Nested if():

Syntax:
   if(condition1){
    ------------
    ------------
        if(condition2){
        ---------------   
        ---------------
        .
        .
        .
        
        }
    ------------
    ------------
   }
    
*/
public class Main
{
	public static void main(String[] args) {
	    int i=1,j=2,n=5;
        System.out.println("1");
        if(i<n){
            System.out.println("2");
            if(j>n){
                System.out.println("3");
            } // second if close
            System.out.println("4");
        } // first if close
        System.out.println("5");
	}
}
