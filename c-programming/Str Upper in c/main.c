/*
A=65
a=97

a ==> A (97-65 = 32)

*/
#include <stdio.h>

void toUpper(char name[]){
    int i;
    for(i=0; name[i]!='\0'; i++){
        if('a' <=name[i] && name[i]<= 'z'){
            name[i]=name[i]-32;
        }
        printf("%c", name[i]);
    }
}

void main(){
    // declare a name
    char name[10];
    // input purpose
    printf("Enter Name:");
    // reading data from keyboard
    scanf("%s", &name);
    // calling the toUpper() function
    toUpper(name);
}



