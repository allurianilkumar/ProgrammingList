/******************************************************************************

0 or 1 is a binary digit

4 bit format:     1111
8 bit format:     11111111



Ex-OR:^ ( Exclusive OR operator is ^)


A  B   (A^B)
T  T    F
T  F    T
F  T    T
F  F    F




*******************************************************************************/

/* 
   8 4 2 1
 6=0 1 1 0 =8*0+4*1+2*1+1*0=4+2=6
 3=0 0 1 1
| = Bitwise OR
------------
   0 1 1 1  => 7
------------

/* 
   8 4 2 1
 6=0 1 1 0 =8*0+4*1+2*1+1*0=4+2=6
 3=0 0 1 1
& = Bitwise AND
------------
   0 0 1 0  => 2
------------
Bitwise LeftShift(<<):
--------------------

   
   8 4 2 1 
 6=0 1 1 0
   1 1 0 0=>12 digit moved leftside (<<)

Syntax:
    
    (variable << MovingDigits)

Example:
 
 1) 6<<1 = 12 Double value
 2) 6<<2 = 24 
  
  
   8 4 2 1 
 6=0 1 1 0 = 8*0+4*1+2*1+1*0=6
   0 0 1 1 =>3 di
   git moved leftside (<<)
 
 1) 6>>1 = 3 Double value
 2) 6>>2 = 1 

EX-OR
----------------
A   B     A ^ B
----------------
0   0     0
0   1     1
1   0     1
1   1     0
       
Example:

       8421
   6=> 0110
   3=> 0011
   ^
   -----------
       0101  => 8*0+4*1+2*0+1*1 => 0+4+0+1 = 5
   ----------
   
   
   Binary Note:
     8421
  0->0000
  1->0001
  2->0010
  3->0011
  4->0100
  5->0101
  6->0110
  7->0111
  
*/
public class Main
{
	public static void main(String[] args) {
    	int a=6,b=3;
    	// Bitwise AND : &
        System.out.println("a&b  => "+(a&b)); // 2
        // Bitwise OR : |
        System.out.println("a|b  => "+(a|b)); // 7
        // Tilt operator: ~
        // 3+1 =4 ==> -4
        System.out.println("~ is tilt operator: ~b   => "+(~b));
        System.out.println("~-4  => "+(~-4)); // -4(+1) =-3 ==> 3
        // Bitwise LeftShift:  <<
        System.out.println("a<<1 => "+(a<<1)); // 12
        // Bitwise RightShift: >>
        System.out.println("a>>1 => "+(a>>1)); // 3
        // Bitwise Ex-OR: ^
        System.out.println("a^b  => "+(a^b)); // 5
	}
}


