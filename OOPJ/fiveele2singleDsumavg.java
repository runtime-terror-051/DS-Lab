//WAP to initialize 5 elements into a single dimensional array . findout sum and average of these 5 elements.
class fiveele2singleDsumavg
{
    public static void main(String args[])
    {
        int a[]={10,20,30,40,50};
        double sum=0.0,avg=0.0;
        int i;
        for(i=0;i<a.length;i++);
        sum=sum+a[i];avg=sum/5;
        System.out.println("sum="+sum);
        System.out.println("avg="+avg);
    }
}