// writing a file
#include <stdio.h>  
void main(){
    // declaring a file handling
   FILE *fp;  
   //opening file
   fp = fopen("file.txt", "w");
   //writing data into file  
   fprintf(fp, "Hello file by fprintf...\n");
   //closing file  
   fclose(fp);
} 
