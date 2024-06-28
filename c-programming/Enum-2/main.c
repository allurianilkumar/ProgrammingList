// Another example program to demonstrate working
// of enum in C
#include<stdio.h>

enum months{Jan, Feb, Mar, Apr, May, Jun, Jul,
		Aug, Sep, Oct, Nov, Dec};

void main(){
    int i;
    for (i=Jan; i<=Dec; i++){	
    	printf("%d ", i);
    }
}






