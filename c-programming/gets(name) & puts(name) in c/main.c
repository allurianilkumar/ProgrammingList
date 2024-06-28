#include <stdio.h>
void main(){
    char name[100]; // total size= 1 Byte*100 = 100 Bytes 
    printf("Enter name:");
    gets(name); // reading data from keyboard (input)
    puts(name); // output like printf()
}
