// continue: to check the condition again or to skip the bellow statements.
// break : to break the black of the loop
#include<stdio.h>
void main(){
    int i=1,n=5;
    while(i<=n){
        if(i==3){
            i++;
            //continue;
            break;
        }
        printf("i=%d\n",i++);
    }
}


