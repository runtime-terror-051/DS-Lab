/*WAP to input mark of a student if the mark is greater than equal to 30, print He/She will pass.*/
import java.util.Scanner;
class passmark30
{
    public static void main (String args[])
    {
        Scanner Ob=new Scanner(System.in);
        int m;
        System.out.println("Enter the mark\n");
        m=Ob.nextInt();
        if(m>=30)
        {
            System.out.println("He/She will pass");
        }
    }
}