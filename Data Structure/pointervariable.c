void main()
{
    int x,y;
    int *p;
    x=10;
    p=&x;
    y=*p;
    printf("\nvalue of x=%d",x);
    printf("\nx is stored at address %d",&x);
    printf("\nvalue of x using pointer=%d",*p);
    printf("\naddress of x using pointer=%u",p);
    printf("\nvalue of x in y=%d",y);
    *p=25;
    printf("\nnow x=%d",x);
    getch();
}
