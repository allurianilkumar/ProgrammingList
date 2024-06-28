// nested for(;;) loop example
#include<stdio.h>
void main(){
    int r,c,n=5;
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            printf("%d ",c);
        }
        printf("\n");
    }
}