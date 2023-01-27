/*WAP to input two numbers find out addition subtraction multiplication and division using switchcase statement*/
import java.util.Scanner;
class calculateswitchcase
{
    public static void main(String args[])
    {
        int num1,num2, res,opt;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter two numbers");
        num1=input.nextInt();
        num2=input.nextInt();
        System.out.println("1-Add\n2.Sub\n3.Mul\n4.div\n");
        System.out.println("Enter your choice\n");
        opt=input.nextInt();
        switch(opt)
        {
            case 1:
                res = num1+num2;
                System.out.println("Sum="+res);
                break;
            case 2:
                res = num1-num2;
                System.out.println("Sub="+res);
                break;
            case 3:
                res = num1*num2;
                System.out.println("Mul="+res);
                break;
            case 4:
                res = num1+num2;
                System.out.println("Div="+res);
                break;
            default : System.out.println("Invalid Input");
        }
        
    }
}