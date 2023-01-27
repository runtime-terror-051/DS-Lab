class Animal
{
    int x,y,z;
    void sum(int a,int b)
    {
        x=a;
        y=b;
        z=x+y;
        System.out.println("sum="+z);
    }
}
public class CandOBJ3
{
    public static void main(String[]args)
    {
        Animal lion=new Animal();
        lion.sum(40,60);
    }
}