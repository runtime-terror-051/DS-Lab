class darray
{
	public static void main(String[]args)
	{
		int[] arry1={12,24,68,75};
		int n1=arry1.length;
		int[] arry2={1,4,16,49,87,100};
		int n2=arry2.length;
		int[] merge=new int[n1+n2];
		int i=0,j=0,k=0,x;
		System.out.print("Array 1:");
		for(x=0;x<n1;x++)
			System.out.print(arry1[x]+" ");
		System.out.print("\nArray 2:");
		for(x=0;x<n2;x++)
			System.out.print(arry2[x]+" ");
		while(i<n1&&j<n2)
		{
			if(arry1[i]<arry2[j])
				merge[k++]=arry1[i++];
			else
				merge[k++]=arry2[j++];
		}
		while(i<n1)
			merge[k++]=arry1[i++];
		while(j<n2)
			merge[k++]=arry2[j++];
		System.out.print("\nArray after merging:");
		for(x=0;x<n1+n2;x++)
			System.out.print(merge[x]+" ");
	}
}