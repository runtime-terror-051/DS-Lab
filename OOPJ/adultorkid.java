/*WAP to input the age of a person if the age is greater than equal to18, print he or she is adult else he or she is  minor.*/
import java.util.Scanner;
class adultorkid
{
    public static void main (String args[])
    {
        int age;
        Scanner Ob=new Scanner(System.in);
        System.out.println("Enter the age of a person");
        age= Ob.nextInt();
        if(age >= 18)
        {
            System.out.println("He/She is a Major");
        }
        else
          {  System.out.println("He/She is a Minor");
        }
    }
}