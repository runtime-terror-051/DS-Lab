/**/
class construct4
{
    int x,y;
    construct4(int P, int Q)
    {
        x=P;
        y=Q;
    }
    construct4(construct4 Ob)
    {
        x=Ob.x;
        y=Ob.y;
    }
    void disp()
    {
        System.out.println("The value of x="+x);
        System.out.println("The value of y="+y);
    }
}
class D
{
    public static void main(String []args)
    {
        construct4 Ob1=new construct4(10,20);
        construct4 Ob2=new construct4(Ob1);
        Ob1.disp();
        Ob2.disp();
    }
}