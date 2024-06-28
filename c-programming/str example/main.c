// string simple example
// Every string should be ends with null character '\0'
#include <stdio.h>
#include <string.h> 
void main(){
    char name[100]={'M','O','M',' ','C','o','m','p','u','t','e','r','s'};
    char nickname[10]="IT";
    int result;
    printf("Name:%s\n",name);
    printf("Nick Name:%s\n",nickname);
    // syntax: int strlen(char[])
    // it return length of the string.
    printf("strlen(name) is %d\n",strlen(name));
    //printf("strlwr(name) is %s\n",strlwr(name));
    //printf("strupr(name) is %s\n",strupr(name));
    //printf("strrev(name) is %s\n",strrev(name));
    
    // strcat(str1,str2) ==> str1=str1+str2
    printf("\nstrcat(str1,str2): %s",strcat(name,nickname));
    printf("\nName:%s\n",name);
    printf("\nNick Name:%s\n",nickname);
    // strcpy(str1,str2) ==> str1=str2
    printf("\nstrcpy(str1,str2): %s",strcpy(name,nickname));
    printf("\nName:%s\n",name);
    printf("\nNick Name:%s\n",nickname);
    //printf("strcmp(str1,str2): %s",strcat(name,nickname));
    // Syntax: int strcmp(str1,str2) ==> str1-str2 ==>result
    // 1) +ve : str1 is big 
    // 2) -v  : str1 is small
    // 3) 0   : str1 & str2 are equal.
    printf("strcmp(str1,str2): %d",strcmp(name,nickname));
    // name is big because get +ve value
    // Applying the if condition for logic
    result=strcmp(name,nickname);
    if(result == 0){
        printf("\nBoth strings are equal");
    }else{
        if(result>0){
            printf("\n str1 is big");
        }else{
            printf("\n str1 is small");
        }
    }

}




