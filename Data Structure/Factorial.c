#include<stdio.h>

#define size 4

int q[size];
int r = -1, f = -1;
void enqueue();
void dequeue();
void Disp();

void main()
{
    int opt;
    printf("1.Insert\n2.Delete\n3.Exit\n");
    while(1)
    {
        printf("\nEnter your Choice:");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
                enqueue();
                printf("\nAfter insertion the result is \n");
                Disp();
                break;
            case 2:
                dequeue();
                printf("\nAfter deletion the result is\n");
                Disp();
                break;
            case 3:
                return;
        }
    }
}
void enqueue()
{
    int item;
    printf("\nEnter the item \n");
    scanf("%d", &item);
    if(r < size - 1)
    {
        r++;
        q[r] = item;
        if(f == -1) f = 0;
    }
    else
        printf("\n Overflow");
}
void dequeue()
{
    int x;
    if(f == -1)
    {
        printf("\n Underflow");

    }
    else
    {
        x = q[f];
        printf("%d is delete", x);
    }
    if(f == r)
    {
        f = -1;
        r = -1;
    }
    else f = f + 1;
}
void Disp()
{
    int i;
    for(i = f; i <= r; i++)
        printf("%3d", q[i]);
}
