// including a library
#include<stdio.h>
// declaration of function
int gift();
// function body
// called function
int gift(){ // here myGift is formal perms
    int myGift=1000;
    printf("Happy Birthday!!!\n");
    printf("Birthday boy gift is %d\n",myGift);
    return myGift;
}
void main(){
    int returnGift;
    printf("Before the gift()\n");
    returnGift=gift(); // myGift is actual arguments
    printf("Return gift is %d\n",returnGift);
    printf("After the gift()\n");
}