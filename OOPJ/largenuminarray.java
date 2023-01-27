//WAP to find large num in ARRAY
public class largenuminarray
{
    public static void main(String [] args)
    {
        int [] arr=new int[]{20,9,7,65,46};
        int max=arr[0];
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>max)
            max=arr[i];
        }
        System.out.println("Largest element prevent in given array:"+max);
    }
}