// while() loop
/*
Syntax:
 while(condition){
     // statements
 }
 --> if the while condition is true then the body of the while() 
 condition is execute until it fails.
 
 --> If the while() condition has single statement the {,} 
     are optional.
 --> If the while() condition has more than one statement the {,} 
     are mandatory,
    
*/

// w.a.p to print 1 to 5 number by using while().
#include "stdio.h"
void main(){
    int i=1,n=5;
    while(i<=n){
        printf("i=%d\n",i++);
    }
}


