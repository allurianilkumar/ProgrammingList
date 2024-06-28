// To print reverse number
/*
Logic:

    n=123  output=>revNumber=321
    rev=0
    while(n!=0){
        rem=n%10; // rem=3; rem=2; rem=1
        rev=rev*10+rem; //0*10+3 =3; 3*10+2 =32; 32*10+1 =321 
        n=n/10; //n=12 ; n=1; n=0
    }
    printf("reverse number is %d",rev);


*/
#include<stdio.h>
void main(){
    int n,rev=0,rem;//  output=>revNumber=321
    printf("Enter n:");
    scanf("%d",&n); // 123
    while(n!=0){
        rem=n%10; // rem=3; rem=2; rem=1
        rev=rev*10+rem; //0*10+3 =3; 3*10+2 =32; 32*10+1 =321 
        n=n/10; //n=12 ; n=1; n=0
    }
    printf("Reverse number is %d",rev);
}

