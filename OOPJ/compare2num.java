//WAP to compare two numbers
import java.util.Scanner;
public class compare2num
{
    public static void main (String args [])
    {
        Scanner input = new Scanner(System.in);
        int n1;
        int n2;
        System.out.print("input first integer:");
        n1= input.nextInt();
        System.out.println("input second integer:");
        n2=input.nextInt();
        if(n1==n2)
            System.out.printf("%d==%d\n",n1,n2);
        if(n1!=n2)
            System.out.printf("%d!=%d\n",n1,n2);
        if(n1<n2)
            System.out.printf("%d<%d\n",n1,n2);
        if(n1>n2)
            System.out.printf("%d>%d\n",n1,n2);
        if(n1<=n2)
            System.out.printf("%d<=%d\n",n1,n2);
        if(n1>=n2)
            System.out.printf("%d>=%d\n",n1,n2);
    }
}