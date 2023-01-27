//WAP to transverse each element of array at least once
#include<stdio.h>
#include<conio.h>
void input(int a[],int);
void disp(int a[],int);
void main()
{
    int a[10],n;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    input(a,n);
    printf("Inputted elements are:\n");
    disp(a,n);
    getch();
}
void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("input the elements for location a[%d]",i);
        scanf("%d",&a[i]);
    }
}
void disp(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("In value for location[%d] is %d\n",i,a[i]);
    getch();
}
