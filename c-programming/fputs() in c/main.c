#include<stdio.h>  
#include<conio.h>  
void main(){
    // declaring a FILE
    FILE *fp;
    // clear the screen
    // opening a file : myfile2.txt file with "w" write mode
    fp=fopen("myfile2.txt","w");
    // fputs() is for writing string to a file
    fputs("hello c programming",fp);
    // close file pointer
    fclose(fp);
}  
