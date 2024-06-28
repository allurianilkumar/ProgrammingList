// string simple example
// Every string should be ends with null character '\0'
// example: "mom\0"
#include <stdio.h>
void main(){
    char name[100];
    printf("Enter a Name:");
    // Reading data from the keyboard
    scanf("%s",&name); // MOM
    // Print the name
    printf("Your Name is %s\n",name);
    printf("0 index Char is %c\n",name[0]); // M
    printf("1 index Char is %c\n",name[1]); // O
    printf("2 index Char is %c\n",name[2]); // M
    // Updating the String (Ex: MOM )
    name[0]='W';
    name[2]='W';
    // showign the updated string ( Ex: MOM => WOW)
    printf("Your Name is %s\n",name); // WOW
}




