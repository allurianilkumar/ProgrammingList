/*

A B C D E F G H I J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26

*/

#include<stdio.h>
void main(){
    int a=65,n=78,i=73,l=76;
    printf("%d\n",a); // 65
    printf("%c\n",a); // A
    printf("%c\n",a+25); // A+25 ==> Z
    printf("%c\n",a+32); // A+32 ==> a
    printf("'a'-'A' : %d\n",'a'-'A'); // 'a'-'A' =32
    printf("%c\n",a+32+25); // A+32 ==> a+25 ==> z
    printf("%c%c%c%c\n",a,n,i,l);
    printf("%c%c%c%c\n",a+32,n+32,i+32,l+32);
    printf("%c%c%c%c",'a'-32,'n'-32,'i'-32,'l'-32);
}

