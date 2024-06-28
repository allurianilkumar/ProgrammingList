// strcat(name,nickname) Example
#include <stdio.h>
#include<string.h>
void main()
{
    char name[10]="MOM";
    char nickname[]="IT";
    strcat(name,nickname);
    printf("Name : %s\n",name);
    printf("Nickname : %s",nickname);
}


