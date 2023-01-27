/*WAP to represent binary search in a descending ordered list*/
#include<stdio.h> #include<conio.h>
int binser(int a[],int,int); void main()
{
int a[10],n,p,key; clrscr(); printf("enter the no. of elements"); scanf("%d", &n); printf("\n enter the elements in descending order"); for(i=1;i<=n;i++) scanf("%d",&a[i]); printf("enter the element to search\n"); scanf("%d",&key); p=binser(a,n,key); if(p==-1) printf("\n search is unsuccessful"); else printf("\n %d is found at location %d", key,p); getch();
}
int binser(int a[],int n, int key)
{
int hi,lo, mid; lo=1;
hi=n; while(lo<=hi)
{
mid=(lo+hi)/2; if(key==a[mid]) return(mid); if(key<a[mid]) lo=mid+1; else hi=mid-1;
}
return(-1);
}
