//Delete a node from a specific location in a singly linked 1ist /
#include<stdio.h>
#1nclude<conio.h>
#include<malloc.h>
struct link
{
int info
struct 1ink *next;
};
struct 1ink *start;
void create (struct link *);
void disp (struct link *);
void delsp (struct link *)
int i-1;
void main()
{
struct 1ink *n;
clrscr();
n=(struct link *)malloc (sizeof(struct 1ink));
start =n;
ereate(n);
disp(n);
delsp(n) ;
n=start;
printf("\nafter deletion : ")
disp(n);
getch();
}
void create (struct link *n)
{
char ch='y';
printf("enter the value for node no %d->",i);
scanf("%d", &n->info);
n->next=NULL;
printf("\npress n to quit Y to continue \n");
fflush(stdin);
ch=getchar();
while (ch=='y')
{
i++
n->next-(struct link *)malloc (sizeof (struct link));
n=n->next;
printf("enter value for node no %d->",i);
scanf("%d", &n->info);
n->next-NULL:
printf("\n do u want to continue (y/n) \n");
fflush(stdin);
ch=getchar();
}
}
void disp(struct 1ink *n)
{
while(n!=NULL)
{
printf("%3d", n->info);
n=n->next;
}
}
void delsp(struct 1ink *n)
{

int i-1, loc;
struct 1ink *prev;
printf("\nenter the location");
scanf("%d", &loc);
while(i<loc)
{
prev n;
n=n-next;
i++;
}
if(loc==1)
    start=n->next;
free(n);
}
