
/*

Increment operator(++) and decrement operator(--):

Increment operator:(+1):-
symbol: ++
a) preinrement(++i): i=i+1;
b) postincrement(i++): i=i+1;

decrement operator:(-1):-
-----------------------
symbol: --
a) predecrement(--i): i=i-1;
b) postdecrement(i--): i=i-1;


*/
#include <stdio.h>

void main(){
    int x=5,y;
    printf("x=%d\n",x); // =5
    printf("++x=%d\n",++x); // x=x+1 =5+1 =6
    printf("x++=%d\n",x++); // x=x+1; =6+1 =7  # 6
    printf("x=%d\n",x); // 7
    
    // preinrement
    y=++x;//y= (x=x+1) => x=7+1 =8 => y=x=8
    printf("y=++x=%d\n",y); // 8
    printf("x=%d\n\n",x); //8
    
    // postincrement
    y=x++; //y=(x=x+1) => y=x=(8+1) => y=8, x=9
    printf("y=x++=%d\n",y); // 8
    printf("x=%d\n",x); //9
}






