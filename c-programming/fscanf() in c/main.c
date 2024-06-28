#include <stdio.h>  
void main(){  
    // declaration of file handling
   FILE *fp;
   //creating char array to store data of file
   char buff[255];
   // opening a file file.txt with read mode
   fp = fopen("file.txt", "r");
   // taking a loop upto EOF 
   // collecting 255 words data from the file
   while(fscanf(fp, "%s", buff)!=EOF){
       //printing 255 word dat from file
        printf("%s ", buff );
   }
   // must close before opening a file
   fclose(fp);  
}  


