// while() loop
/*
Syntax:
 while(condition){
     // statements
 }
 --> if the while condition is true then the body of the while() 
 condition is execute until it fails.
 
 --> If the while() condition has single statement the {,} 
     are optional.
 --> If the while() condition has more than one statement the {,} 
     are mandatory,
    
*/
public class Main
{
	public static void main(String[] args) {
	    int i=1,n=5;
        while(i<=n){
            System.out.println("i="+i);
            i=i+1;
        }
	}
}
