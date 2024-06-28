/*
/*
Nested if-else:

Syntax:
   if(condition1){
    ------------
    ------------
   }else{
        ------------
        ------------
        if(condition2){
        ---------------   
        ---------------
        }else{
            ------------
            ------------
        }
   }
*/
public class Main
{
	public static void main(String[] args) {
	    int i=1,j=1,n=5;
	    System.out.println("1\n");
        if(i>n){
            System.out.println("2\n");
        }else{
            System.out.println("3\n");
            if(j>n){
                System.out.println("4\n");        
            }else{
                System.out.println("5\n");    
            }
            System.out.println("6\n");
        }
        System.out.println("7\n");
	}
}
