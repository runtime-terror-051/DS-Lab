#include<stdio.h>
struct
{
    int id,basic,da,hra,deduction;
    char name[10];
}emp;
void main()
{
    int net;
    printf("Enter the details of the employee");
    scanf("%d%d%d%d%d%s",&emp.id,&emp.basic,&emp.da,&emp.hra,&emp.deduction,&emp.name);
    net=(emp.basic+emp.da+emp.hra)-emp.deduction;
    printf("Employee's details:");
    printf("\n name=%s",emp.name);
    printf("\n id=%s",emp.id);
    printf("\n basic=%s",emp.basic);
    printf("\n da=%s",emp.da);
    printf("\n hra=%s",emp.hra);
    printf("\n deduction=%s",emp.deduction);
    printf("\n net=%s",net);
    getch();
}
