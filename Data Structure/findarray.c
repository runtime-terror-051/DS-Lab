//WAP ti find the numbers in an array
#include<stdio.h>
#include<conio.h>
void modify(int a[]);
void main()
{
    int a[3],i;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    modify(a);
    for(i=0;i<3;i++)
        scanf("%d"<&a[i]);
    modify(a);
    for(i=0;i<3;i++)
        printf("\%d",a[i]);
    getch();
}
void modify(int a[])
{
   int i;
   for(i=0;i<3;i++)
   a[i]=a[i]*a[i];
}
