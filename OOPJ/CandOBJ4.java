class Calculate
{
    void sum(int a,int b)
    {
        System.out.println("sum is"+(a+b));
    }
        void sum(float a,float b)
    {
        System.out.println("sum is"+(a+b));
    }
}
public class CandOBJ4
{
    public static void main(String[]args)
   {
    Calculate num=new Calculate();
    Calculate.sum(40,60);
    Calculate.sum(4.6f,3.8f);
   }
}