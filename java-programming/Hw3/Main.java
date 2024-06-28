import java.util.Scanner;
public class Main
{
    public static int base, exponent;
    public static double volume,height;
    public static int  integerPower(int base, int exponent){
        int result=1;
        for(int i=1;i<=exponent;i++){
            result=result*base;
        }
        return result;
    }
    public static double volume(double  radius,double height){
        
        return radius*height;
    }
    public static void pattern(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void menu(){
        //1. Integer Power
        //2. Volume of a Cylinder
        //3. Patterns
        //4. Exit
        System.out.println("1. Integer Power");
        System.out.println("2. Volume of a Cylinder");
        System.out.println("3. Patterns");
        System.out.println("4. Exit");
        
    }
	public static void main(String[] args) {
	    
	    Scanner scr=new Scanner(System.in);
	    menu();
	    System.out.println("Enter any option:");
	    int choice=scr.nextInt();
	    do{
	        switch(choice){
	            case 1:
	                    System.out.println("Enter base and exponent:");
	                    base=scr.nextInt();
	                    exponent=scr.nextInt();
	                    System.out.println(integerPower(base,exponent));
	                    break;
	           case 2:
	                    System.out.println("Enter Volume and height:");
	                    volume=scr.nextInt();
	                    height=scr.nextInt();
	                    System.out.println(volume(volume,height));
	                    break;
   	           case 3:
	                    System.out.println("Enter pattern N:");
	                    int n=scr.nextInt();
	                    pattern(n);
	                    break;
	           default:
	                System.out.println("Enter a valid choice");
	        }
	    menu();
	    System.out.println("Enter any option:");
	    choice=scr.nextInt();
	    }while(choice==1 || choice==2 || choice==3 );
		System.out.println("Invalid choice, Thank you");
	}
}

