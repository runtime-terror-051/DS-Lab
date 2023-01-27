/*
 * WAP in JAVA to check a year is leap year or not
 */
public class Leap
{
    public static void main(String [] args)
    {
        int year = 2020;
        if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Common Year");
        }
    }
}
