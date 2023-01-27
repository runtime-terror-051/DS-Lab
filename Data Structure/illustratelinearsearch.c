/* WAP to illustrate linear search*/
#include<stdio.h> #include<conio.h>
void linser(int a[],int,int); void main()
{
int a[10],p,search,c,n; clrscr(); printf("enter the no. of elements in array\n:"); scanf("%d", &n); printf("enter %d integer(s)\n",n); for(c=0; c<n;c++) scanf("%d",&a[i]); printf("enter the number to search\n"); scanf("%d",& search); p=linser(a,n,search); if(p==-1) printf("search is unsuccessful"); getch();
} int linser(int a[], int n, int search)
{ int c; for(c=0; c<n;c++)
{
if(a[c]==search)
{
printf("\n %d is present at location %d\n", search,c+1); break;
}
}
if(c==n) return(-1); }
/*WAP to represent binary search in an ascending ordered list*/
#include<stdio.h> #include<conio.h>
int binser(int a[],int,int); void main()
{
int a[10],n,p,key; clrscr(); printf("enter the no. of elements"); scanf("%d", &n); printf("\n enter the elements in ascending order"); for(i=1;i<=n;i++) scanf("%d",&a[i]); printf("enter the element to search\n"); scanf("%d",&key); p=binser(a,n,key); if(p==-1) printf("\n search is unsuccessful"); else printf("\n %d is found at location %d", key,p); getch();
}
int binser(int a[],int n, int key)
{
int hi,lo, mid; lo=1; hi=n; while(lo<=hi)
{
mid=(lo+hi)/2; if(key==a[mid]) return(mid); if(key<a[mid]) hi=mid-1; else lo=mid+1;
}
return(-1);
}
