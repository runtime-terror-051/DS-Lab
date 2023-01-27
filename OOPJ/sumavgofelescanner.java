import java.util.Scanner;
public class sumavgofelescanner
{
    public static void main (String [] args)
    {
        int size;
        System.out.print("Enter size of Array");
        Scanner sc =new Scanner(System.in);
        size=sc.nextInt();
        int array[]=new int[size];
        int sum=0;
        for(int i =0;i<array.length;i++)
        {
            array[i]=sc.nextInt();
            sum=sum+array[i];
        }
        System.out.print("Sum of Array Element are:"+sum);
        double average=(sum/array.length);
        System.out.print("Avg of Array"+array);
    }
}