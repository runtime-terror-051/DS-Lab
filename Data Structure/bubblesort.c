/*WAP to illustrate bubble sort using C*/
#include<stdio.h> #include<conio.h> void bubblesort(int[],int); void main()
{
int a[20],m,i; clrscr();
printf("\n enter the number of numbers to be sorted:"); scanf("%d",&m); printf("\n enter %d elements \n",m); for(i=1;i<=m;i++) scanf("%d",&a[i]); bubblesort(a,m); getch();
}
void bubblesort(int a[],int m)
{ int t,p,j;
for(p=1;p<=m-1;p++)
{
for(j=1;j<=m-p;j++)
{
if(a[j]>a[j+1])
{ t=a[j]; a[j]=a[j+1]; a[j+1]=t;
}
}
}
for(j=1;j<=m;j++) printf("%d\t",a[j]);
 6+
