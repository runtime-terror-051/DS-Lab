/*
 * Program to find the sum of naural numbers from 1 to 100
 */
public class Main
{
    public static void main(String [] args)
    {
        int sum = 0, n = 100;
        for(int i = 1; i <= n; ++i)
        {
            sum += i;
        }
        System.out.println("Sum = " + sum);
    }
}
