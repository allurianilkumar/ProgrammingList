#include<stdio.h>

void main () {
   // Declaration of the FILE
   FILE *fp;
   char str[] = "MOM IT Solutions";
   // FilePointer =  fopen("Filename","FileMode")
   // create a empty file
   fp = fopen( "mom.txt" , "w" );
   // write into file.txt file
   fwrite(str , 1 , sizeof(str) , fp );
   // close the file
   fclose(fp);
}


