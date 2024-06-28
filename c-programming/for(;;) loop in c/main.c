/*

Syntax:
        for(initialization; condition;increment or decrement){
            statement-1;
            statement-2;
            statement-3;
            ....
            ....
            ....
            statement-n;
        }
--> for(;;) is used for repeating a body of the for(;;) loop upto 
the for(;;) condition is true.
--> increment part executed only once (one time).
--> If condition is true then execute the body for(;;) loop.
--> After executing the body then execute the increment or decrement.
--> Again checking the for(;condition;)  if it is true then execute
    body of the for(;;) loop until it fails.
--> increment part is optional
--> condition part is mandatory.
--> increment or decrement is optional.
*/
#include<stdio.h>
void main(){
    int i;
    for(i=1;i<=5;i++){
        printf("i=%d\n",i);
    }
}