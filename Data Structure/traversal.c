/*transversal linked list EXP-11*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node*link;
};
struct node*n,*first,*this1;
void main()
{
    char ch;
    int item;
    first=NULL;
    printf("Enter q to quit:");
    while((ch=getche())!='q')
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter info=");
        scanf("%d",&n->info);
        n->link=NULL;
        if(first==NULL)
            first=n;
        else
    {
     this1=first;
     while(this1->link!=NULL)

      this1=this1->link;
      this1->link=n;
    }
    printf("Enter q to quit:");
}
 this1=first;
 while(this1!=NULL)
 {
    printf("\n%d",this1->info);
    this1= this1->link;
 }
getch();
}
