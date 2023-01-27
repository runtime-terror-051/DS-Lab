#include<stdio.h>
#include<conio.h>
void displayNumber(int num[2][2]);
void main()
{
    int num[2][2],i,j;
    printf("Enter 4 numbers\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&num[i][j]);
    displayNumber(num);
    getch();
}
void displayNumber(int num[2][2])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%4d",num[i][j]);
        }
        printf("\n");
    }
}
