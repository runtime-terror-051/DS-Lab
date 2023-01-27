class MyClass
{
    int x;
    void disp()
    {
       x=20;
       System.out.println(x);
    }
}
public class CandOBJ
{
    public static void main(String[]args)
    {
        MyClass Obj=new MyClass();
        Obj.disp();

    }
}