// scanf() example in c
#include "stdio.h"
void main(){
    int studentNumber=10; // integer
    float bookPrice=123.45; // floating point
    char gender='M'; // character data type
    char name[]="MOM"; // string 
    
    printf("\nStudent Number = %d",studentNumber);
    printf("\nBook Price     = %.2f",bookPrice);
    printf("\nGender         = %c",gender);
    printf("\nName           = %s",name);
    printf("\n======================================");
    
    printf("\nEnter Student Number,Book Price,Gender,Name:");
    
    scanf("%d%f",&studentNumber,&bookPrice);
    //scanf("%c",&gender);
    scanf("%s",&name);
    
    printf("\nStudent Number = %d",studentNumber);
    printf("\nBook Price     = %.3f",bookPrice);
    
    printf("\nGender         = %c",gender);
    printf("\nName           = %s",name);
    printf("\n======================================");
}


