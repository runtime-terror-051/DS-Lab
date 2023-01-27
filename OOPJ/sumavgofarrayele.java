import java.util.*;
public class sumavgofarrayele
{
    public static void main (String args[])
    {
        int array []={10,20,30,40,50,60};
        int sum=0;
        for(int i=0;i<array.length;i++)
        {
            sum =sum+array[i];
        }
        System.out.println("Sum of Array Elements are:"+sum);
        double average=(sum/array.length);
        System.out.println("Average of Array Elements is"+average);
    }
}