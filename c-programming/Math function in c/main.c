/*

adding the <math.h> header file before use
math functions like abs(),pow(),floor(),ceil() etc.

*/

#include <stdio.h>
#include<math.h>
void  main(){
    printf("\n%f",ceil(3.6)); // 4.000000
    printf("\n%f",ceil(3.3)); // 4.000000
    printf("\n%f",floor(3.6)); // 3.000000
    printf("\n%f",floor(3.2)); // 3.000000
    printf("\n%f",sqrt(16)); // 4.000000
    printf("\n%f",pow(2,4)); // 16.000000
    printf("\n%f",pow(3,3)); // 27.000000
    printf("\n%d",abs(-12)); // 12
    printf("\n%d",abs(12)); // 12
}




