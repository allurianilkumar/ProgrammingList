// Reading data from the file.txt file.
#include <stdio.h>

void main () {
   FILE *fp;
   int c;
    // opening the file.txt file in "r" mode.
   fp = fopen("mom.txt","r");
   while(1) {
      c = fgetc(fp);
      if(feof(fp)) {
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);
}


