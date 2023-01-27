/*WAP to find the sum and average of n numbers using function*/
#include<stdio.h>
#include<conio.h>
void avg(int a[],int);
void main()
{
    int a[10],n;
    clrscr();
    printf("enter the no. of elements");
    scanf("%d",&n);
    avg(a,n);
    getch();
}
void avg(int a[],int n)
{
   float avg=0,i;
   printf("enter the element of array");
   for(i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
       s=s+a[i];
   }
   avg=(float)s/n;
   printf("sum=%d avg=%f",a,avg);
   getch();
}
