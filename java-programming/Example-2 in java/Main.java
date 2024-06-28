
public class Main {
	int rank=101; // fields or class properties or class variables or static variables
	static int sno=111;
	static int marks; // default value is 0
	static boolean results; // default value is 0
	public static void main(String[] args) {
		int i;// here i is a local varibale
		i=10;
		System.out.println(i);
		// creating a reference of Example1
		Main ref=new Main(); // ref is reference
		System.out.println("Rank="+ref.rank);
		System.out.println("Rank via ref="+ref.sno);
		System.out.println("Rank via without ref="+sno);
		System.out.println("Marks via without ref="+marks);
		System.out.println("Results via without ref="+results);
		results=true;
		System.out.println("Updated Results via without ref="+results);
		System.out.println("1<2 => "+(1<2));
		System.out.println("1>2 => "+(1>2));
		
	}

}
