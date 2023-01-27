#include<stdio.h>
void main()
{
    int a,b,sum=0;
    printf("enter a & b\n");
    scanf("%d%d",&a,&b);
    add(&a,&b,&sum);
    getch();
}
add(int *a,int *b, int *sum)
{
    *sum=*a+*b;
    printf("sum=%d",*sum);
}
