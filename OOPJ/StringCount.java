import java.util.Scanner;
class StringCount
{
    public static void main(String[]args)
    {
        String sen="KIIT Polytechnic, I am Ranak Samal 2110544,ADD:BBSR??751025";
        count(sen);
    }
    public static void count(String x)
    {
        char[] ch=x.toCharArray();
        int letter=0;
        int space=0;
        int num=0;
        int other=0;
        for(int i=0;i<x.length();i++)
        {
            if(Character.isLetter(ch[i]))
                letter++;
            else if(Character.isDigit(ch[i]))
                num++;
            else if(Character.isSpaceChar(ch[i]))
                space++;
            else
                other++;
        }
        System.out.println("The string is:"+ch);
        System.out.println("Letters:"+letter);
        System.out.println("Number"+num);
        System.out.println("Space:"+space);
        System.out.println("Others:"+other);
    }
}