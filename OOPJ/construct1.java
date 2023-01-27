/**/
class construct1
{
    int x,y,z;
    construct1()
    {
        x=10;
        y=20;
    }
    void show()
    {
        z=x+y;
        System.out.println(z);
    }
}
class A
{
    public static void main(String[]args)
    {
        construct1 Ob1=new construct1();
        Ob1.show();
    }
}
