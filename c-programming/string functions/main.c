#include <stdio.h>
#include<string.h>
void main()
{
    char name[10];
    char temp[10];
    printf("Enter ur name:");
    scanf("%s",&name);
    //gets(name);
    printf("My Name is %s\n",name);
    //puts(name);
    //1 )  int strlen(char[])  : To print the length of the string
    printf("length of the %s is %d.",name,strlen(name));
    // s1=s2
    // copying from name(str2) to temp(str1).
    strcpy(temp,name);
    // printing temp(str1)
    printf("\nTemp = %s",temp);
    // s1=s1+s2
    strcat(temp," IT");
    printf("\n strcat(temp,\" IT\") => %s",temp);
    // int strcmp(s1,s2) => s1-s2 => -ve s1 is small
    // 65-66 = -1
    // s1=s1-s2
    printf("\nstrcmp(A,B) => %d",strcmp("AB","ABC")); // AB is Small
    // s1=s1-s2 => 0 value => s1 and s2 both are same
    printf("\nstrcmp(A,A) => %d",strcmp("A","A")); // Both are same
    // s1=s1-s2 => +ve value => s1 is big
    printf("\nstrcmp(B,A) => %d",strcmp("B","A")); // B is big
}
    




