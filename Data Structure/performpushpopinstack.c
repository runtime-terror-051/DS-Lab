/*WAP to perform push and pop operation in stack*/
#include<stdio.h>
#define max 10
void push();
void pop();
void disp();
int top=-1;
int st[max];
void main()
{
    int up;
    clrscr();
    while(1)
    {
        printf("\n1:push:");
        printf("\n2:pop:");
        printf("\n3:disp:");
        printf("\n4:quit:");
        printf("\n enter ur choice");
        fflush(stdin);
        scanf("%d",&top);
        switch(top)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit();
            break;
            default:
            printf("\n invalid choice:");
            break;
        }
    }
}
void push()
{
    int item;
    if(top=max-1)
        printf("\n stack in overflow");
        else
        {

            printf("enter the elements");
            scanf("%d",&item);
            top=top+1;
            st[top]=item;
        }
}
void pop()
{
    if(top==-1)
        printf("\n stack is underflow");
    else{
        printf("%d,deleted\n",st[top]);
        top=top-1;
    }
}
void disp()
{

    int i;
    if(top==-1)
        printf("stack is empty:\n");
    else
    {

        printf("stack elements are:\n");
        for(i=0;i<=top;i++)
            printf("%d\t",st[i]);
    }
}
