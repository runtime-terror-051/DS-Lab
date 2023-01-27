/*Implimentation of stack using string*/
#include<stdio.h>
#include<string.h>
# define max 100
int top,stack[max];
void push(char x)
{
    //push(Inserting Element in stack)operation
    if(top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        stack[++top]=x;
    }
}
void pop()
{
    //pop(Removing element from stack)
    printf("%C",stack[top--]);
}
void main()
{
    char str[] = "sri lanka";
    int len=strlen(str);
    int i;
    for(i=0;i<len;i++)
        push(str [i]);
    for(i=0;i<len;i++)
        pop();
}
