 import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the countSwaps function below.
  static void countSwaps(int a[]){
      int n=a.length;
      int swap=0;
    for(int pass=0;pass<n-1;pass++){
        int flag=0;
        for(int i=0;i<n-1-pass;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=flag+1;
                swap++;
            }
        }
        if(flag==0){
           //cout<<"Element is sorted in "<<pass<<" pass"<<endl;
            break;
        }
    }
System.out.println("Array is sorted in "+swap+" swaps.");
System.out.println("First Element: "+a[0]);
System.out.println("Last Element: "+a[n-1]);    
}
private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] a = new int[n];

        String[] aItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int aItem = Integer.parseInt(aItems[i]);
            a[i] = aItem;
        }

        countSwaps(a);

        scanner.close();
    }
}
