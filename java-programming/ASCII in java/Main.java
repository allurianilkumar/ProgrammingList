/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
    static int a1=100,b1=200;
    int x1=1000,y1=2000;
	public static void main(String[] args) {
	    int a=10,b=20; //a and b are local variable
	    // +,-,*,
	    System.out.println(a+b);
	    System.out.println(a1+b1);
	    Main m=new Main();
	    System.out.println(m.x1+m.y1);
	}
}
