public class Main
{
	public static void main(String[] args) {
	    System.out.println("Hello World");
		System.out.println("Ongole");
		System.out.println("Ongole");
	    /* declaration of the variable */
	    int a;// a is a local variable
	    a=10;
	    /* Initialization of the variable */
	    float bookPrice=123.500f; // should be use "f" in a value
	    double penPrice=12.50;
	    System.out.println("price is "+bookPrice);
	    System.out.println("price is "+penPrice);
		System.out.println("A="+a);
		// Sum of the two values
		int a1=10,b1=20;
		// adding a string + int => String
		System.out.println("a1+b1==>"+a1+b1);
		// string + ( int + int) ==> string 
		// int + in ==> int
		// int + float ==> float
		System.out.println("(a1+bookPrice)==>"+(a1+bookPrice));
		System.out.println("(a1+b1)==>"+(a1+b1));
		System.out.println("(a1*b1)==>"+(a1*b1));
		System.out.println("(a1-b1)==>"+(a1-b1));
		System.out.println("(b1/a1)==>"+(b1/a1));
		System.out.println("(b1%a1)==>"+(b1%a1));
		int i;
		for(i=1;i<=5;i++){
			System.out.println("MOM Computers"+i++);
		}
		i=1;
		while(i<=5){
			System.out.println("++i => "+(++i));
		}
		for(i=1;i<=5;i++){
			System.out.println("MOM Computers"+i++);
		}
		i=1;
		while(i<=5){
			System.out.println("++i => "+(++i));
		}
		i=10;
		while(i!=0){
			System.out.println("i-- => "+(i--));
		}
	}
}

