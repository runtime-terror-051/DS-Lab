/**/
class construct2
{
    int x,y,z;
    construct2(int P, int Q)
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
class B
{
    public static void main(String []args)
    {
        construct2 Ob=new construct2(10,20);
        Ob.show();
    }
}