#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
    int x,y;
    printf("Enter the value of x and y \n");
    scanf("%d%d",&x,&y);
    printf("Before Swapping\n x=%d \n y=%d \n",x,y);
    swap(&x,&y);
    printf("After Swapping in main function\n x=%d\n y=%d\n",x,y);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("Values of a and b after swapping in swap function is\n%d %d\n",*a,*b);
}
