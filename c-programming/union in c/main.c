// struct with an pointer
#include<stdio.h>
#include<string.h>
// union declaration
union student{
  int sid;
  char sname[20];
};
// declaration of union pointer
union student stu1,*ptr; // stu is structure variable and *ptr is structure pointer
void main(){
    // every index start from 0 values
    stu1.sid=101;
    strcpy(stu1.sname,"MOM");
    // printing values
    printf("**********Variable Output********\n");
    printf("Sid=%d\n",stu1.sid);
    printf("Sname=%s\n",stu1.sname);
    // pointer assinging
    ptr=&stu1;
    // pointer variable access
    printf("**********Pointer Output********\n");
    printf("Sid=%d\n",ptr->sid);
    printf("Sname=%s",ptr->sname);
}
