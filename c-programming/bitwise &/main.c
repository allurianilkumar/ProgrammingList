/* 
 Binary digit =  0 OR 1
 
 1 bit format: 0 value = 0
 2 bit format: 0 value = 00
 3 bit format: 0 value = 000
 4 bit format: 0 value = 0000
 8 bit format  0 value = 00000000
 
        8 4 2 1 
 0 =    0 0 0 0 
 1 =    0 0 0 1
 2 =    0 0 1 0
 3 =    0 0 1 1
 4 =    0 1 0 0 
 5 =    0 1 0 1
 6 =    0 1 1 0
 7 =    0 1 1 1 = 8*0+4*1+2*1+1*1=0+4+2+1=7
 
 
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


leftshift (<<):-
   8 4 2 1 
 6=0 1 1 0
   1 1 0 0=>12 digit moved leftside (<<)

Syntax:
    
    (variable << MovingDigits)

Example:
 
 1) 6<<1 = 12 Double value
 2) 6<<2 = 24 
  
  
   8 4 2 1 
 6=0 1 1 0
   0 0 1 1 =>1 digit moved leftside (<<)
 1) 6>>1 = 3 (half value)
 2) 6>>2 = 1 




EX-OR(Exclusive OR : ^)
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

Tilt operator( ~ ): It means ( +1) & opposite sign
1) a=6 ==> ~a  ==> a+1 = 6+1= 7 = -7
2) a=-6 ==> ~a ==> -6+1=-5 = 5

*/
#include  "stdio.h"
void main(){
    int a=6,b=3;
    printf("a&b  => %d\n",a&b); // 2
    printf("a|b  => %d\n",a|b); // 7
    printf("~ is tilt operator: ~b   => %d\n",~b); // 3(+1) =4 ==> -4
    printf("~-4  => %d\n",~-4); // -4(+1) =-3 ==> 3
    printf("a<<1 => %d\n",a<<1); // 12
    printf("a>>1 => %d\n",a>>1); // 3
    printf("a^b  => %d",a^b); // 5
}






