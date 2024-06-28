/*
for(;;) loop:
-------------

Syntax:
-------
    for(initialization;condition;increment/decrement){
        statements
    }
    
1. initialization and increment/decrement parts are optional
2. condition is mandatory
3. {,} are optional for single statement.

Execution: 
1. initialization(part1) is executing one time only after 
2. executing condition (part2)
3. if the condition is true thenn executing body of the for(;;) loop
4. executing increment/decrement (part3) after 
5. Agian checking the condition upto it fails the condition.

*/
#include <stdio.h>
void main(){
 int i,n=5;
 for(i=1;i<=n;i++){
     printf("i=%d\n",i);
 }
}
 
/* for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("%d ",j);
    }
    printf("\n");
 }
 */
 






