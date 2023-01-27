/*WAP to delete a node at the beginning of single linked list*/
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct link
{
 int info;
 struct link * next;
};
struct link *start;
void create(struct link *);
void disp(struct link *);
void del(struct link *);
int i=1;
void main()
{
 struct link *n;
 n=(struct link *)malloc(sizeof(struct link));
 create(n);
 disp(n);
 del(n);
 n=start;
 printf("\n after deletion\n");
 disp(n);
 getch();
}
void create(struct link *n)
{
 char ch='y';
 printf("enter value for node no %d->",i);
 scanf("%d",&n->info);
 n->next=NULL;
 printf("\n press n to quit y to continue\n");
 fflush(stdin);
 ch=getchar();
 while(ch=='y')
 {
  i++;
  n->next=(struct link *)malloc(sizeof(struct link));
  n=n->next;
  printf("enter value for node no %d->",i);
  scanf("%d",&n->info);
  n->next=NULL;
  printf("\n do u want to continue(y/n)\n");
  fflush(stdin);
  ch=getchar();
 }
}
void disp(struct link *n)
{
 while(n!=NULL)
 {
  printf("%3d",n->info);
  n=n->next;
 }
}
void del(struct link *n)
{
 struct link *temp;
 temp=n;
 if(temp==NULL)
 {
  printf("underflow");
  exit(0);
 }
 n=n->next;
 free(temp);
 start=n;
}
