/*WAP to input the number check wheather it is even or odd*/
import java.util.Scanner;
class oddeven
{
    public static void main (String args[])
    {
        int num;
        Scanner Ob =new Scanner(System.in);
        System.out.println("Enter a number: ");
        num=Ob.nextInt();
        if(num % 2==0)
        {
            System.out.println("It is even number");
        }
        else
        {
            System.out.println("It is odd number");
        }
    }
}
