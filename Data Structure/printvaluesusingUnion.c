/*WAP to print the values using UNION*/
#include<stdio.h>
{
    int roll;
    char name;
}
void main()
{
    union std s;
    clrscr;
    s.roll=6.0;
    s.name='A';
    printf("size of union=%d",size of(union std));
    printf("\n roll=%d",s.roll);
    s.name='A';
    printf("\n name=%",s.name);
    getch();
}
