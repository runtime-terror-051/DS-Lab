class Animal
{
    int x,y,z;
    void sum()
    {
        x=40;
        y=60;
        z=x+y;
        System.out.println("Sum="+z);
    }
}
public class CandOBJ2
{
    public static void main(String[]args)
    {
        Animal cat=new Animal();
        cat.sum();
    }
}