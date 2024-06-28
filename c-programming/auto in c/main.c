/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
auto int i=1;
{
    auto int i=2;
    {
        auto int i=3;
        printf("i=%d\n",i);
    }
    printf("i=%d\n",i);
}
printf("i=%d\n",i);

}
