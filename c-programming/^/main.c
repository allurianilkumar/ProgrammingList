/******************************************************************************
 *   8421 
a=8; 1000
b=2; 0010
^
===========
     1010
===========

---------
A B A^B
----------
1 1  0
1 0  1
0 1  1
0 0  0


*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=8,b=2;
    printf("%d",(a^b));

    return 0;
}
