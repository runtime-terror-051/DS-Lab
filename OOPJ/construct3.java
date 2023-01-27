/**/
class construct3
{
    int x,y,z;
    construct3()
    {
        x=100;
        y=200;
    }
    construct3(int P,int Q)
    {
        x=P;
        y=Q;
    }
    void show()
    {
        z=x+y;
        System.out.println("Sum="+z);
    }
}
class C
{
    public static void main(String []args)
    {
        construct3 Ob1=new construct3();
        construct3 Ob2=new construct3(10,20);
        Ob1.show();
        Ob2.show();
    }
}