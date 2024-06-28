#include <stdio.h>
void main(){
   char ch;
   FILE *fp;

   fp=fopen("std1.txt","w"); //open the file in write mode
   printf("enter the text then press cntrl Z:\n");
   while((ch = getchar())!= '*') {
   //reading char by char until it equals to EOF{
   //   i.e. when u press ctrlZ the while loop terminates
      putc(ch,fp);
   }
   fclose(fp);

   fp=fopen("std1.txt","r");
   printf("Reading char from std1.txt file:\n");
    //reading the character from file until fp equals to EOF
   while ((ch=getc(fp))!=EOF){
      putchar(ch);
   }
   fclose(fp);
}
