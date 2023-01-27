class Box2
{
    public static void main(String []args )
    {
        double result;
        Box box=new Box();
        box.width=5.0;
        box.height=4.0;
        box.depth=3.0;
        result=box.Volume();
        System.out.println("Result="+result);
    }
}