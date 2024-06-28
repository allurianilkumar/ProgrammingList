/******************************************************************************
2) Assignment operator
    a) Simple Assignment operator(=)
    b) Compound Assignment operator(+=,-=,*=,/=,%=)
    c) Chainging Assignment operator(Ex: a=b=c=100;)

*******************************************************************************/
#include <stdio.h>
void main(){
    // declaration of the variable
    int a,b,c;
    // a) Simple assignment operator (=)
    printf("\na) Simple assignment operator (=)\n");
    a=1;
    printf("A=%d\n",a);

    // b) compound assignment operator
    printf("\nb) compound assignment operator\n");
    a+=1; // a=a+1;
    printf("A+=1 :- %d\n",a);
    a-=1; // a=a-1;
    printf("A-=1 :- %d\n",a);
    a*=1; // a=a*1;
    printf("A*=1 :- %d\n",a);
    a/=1; // a=a/1;
    printf("A/=1 :- %d\n",a);
    a%=1; // a=a%1;
    printf("A Modulo =1 :- %d\n",a);

    // c) chainging assignment operator
    printf("\nc) chainging assignment operator\n");
    a=b=c=100;
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    printf("C=%d",c);
}





