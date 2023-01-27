/*15. Given are two one-dimensional arrays, A and B which are sorted in ascending order. Write a program to merge them into a single sorted array that contains every item from arrays A and B, in ascending order.*/


public class Q15 
{
  public static void main (String[] args) {
      int[] arr1 = {12, 24, 68, 75};
      int n1 = arr1.length;
      int[] arr2 = {1, 4, 16, 49, 87, 100};
      int n2 = arr2.length;
      int[] merge = new int[n1 + n2];
      int i = 0, j = 0, k = 0, x;
      System.out.print("Array 1: ");
      for (x = 0; x < n1; x++)
      System.out.print(arr1[x] + " ");
      System.out.print("\nArray 2: ");
      for (x = 0; x < n2; x++)
      System.out.print(arr2[x] + " ");
      while (i < n1 && j < n2) {
         if (arr1[i] < arr2[j])
            merge[k++] = arr1[i++];
         else
            merge[k++] = arr2[j++];
      }
      while (i < n1)
      merge[k++] = arr1[i++];
      while (j < n2)
      merge[k++] = arr2[j++];
      System.out.print("\nArray after merging: ");
      for (x = 0; x < n1 + n2; x++)
      System.out.print(merge[x] + " ");
   }
}
