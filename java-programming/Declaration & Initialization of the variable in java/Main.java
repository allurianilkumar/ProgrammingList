/******************************************************************************

A) Declaration of the variable:

Syntax: 
        DataType  variable;
Ex:     int a; // 'a' is a variable.

Syntax: 
        DataType  var1,var2,var3,...  var-n;

Ex:     int a,b,c; // a,b and c are variables.



B) Initialization of the variable:
Syntax: 
        DataType  variable=value;
Ex:     int a=10; // 'a' is a variable.

Syntax: 
        DataType  var1=val1,var2=val2,var3=val3,...  var-n=valun;

Ex:     int a=10,b=20,c=30; // a,b and c are variables.

*** constant variables should be write in upper case.
Ex: int PI=3.14;

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
		int a; // local variables 
		int p=1,q=2,r=3;
		// local variables shoud assign before use it.
		a=100;
		System.out.println("A="+a);
		System.out.println("P="+p);
		System.out.println("Q="+q);
		System.out.println("R="+r);
	}
}
