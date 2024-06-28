/******************************************************************************
String:

Two ways to represent a string.
1. By Char Array. 
    Ex: char name[]={'M','O','M','\0'};
2. By String literal 
    Ex: char name="MOM";

*******************************************************************************/
#include <stdio.h>
void main(){
    // By Char Array. Ex: 
    char name[]={'M','O','M','\0'};
    // By String literal Ex: 
    char nickName[]="MOM";
    printf("By char Array:%s\n",name);
    printf("By char Array: 1St => %c\n",name[0]);
    printf("By char Array: 2nd => %c\n",name[1]);
    printf("By char Array: 3rd => %c\n",name[2]);
    printf("By String literal:%s\n",nickName);
    printf("By String literal: 1st => %c\n",nickName[0]);
    printf("By String literal: snd => %c\n",nickName[1]);
    printf("By String literal: 3rd => %c\n",nickName[2]);
}
