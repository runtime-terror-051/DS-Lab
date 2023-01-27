#include<stdio.h>

struct
{
    int roll, m1, m2;
    char name[10];
}s;
void main()
{
    printf("Enter the details of the student: \n");
    scanf("%s%d%d%d",&s.name, &s.roll, &s.m1, &s.m2);
    printf("The details are \n ");
    printf("Name=%s\n Roll=%d\n Mark 1= %d\n Mark 2= %d",s.name,s.roll,s.m1,s.m2);
}
