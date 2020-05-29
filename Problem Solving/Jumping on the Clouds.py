import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the jumpingOnClouds function below.
    static int jumpingOnClouds(int[] c) {
         //String path="";
         int count=0;
        int n=c.length;
        if(n<2 | n>100){
            System.exit(0);
        }
        if(c[0]!=0 & c[n-1]!=0){
            System.exit(0);
        }
        //System.out.println("----------");
            for(int i=0;i<n;i++){
                //System.out.println("i= "+i);
                
                if(i<n-2){

                if(c[i]==0){
                    //path=path+Integer.toString(i);
                    //System.out.println(path);
                    count++;
                    if(c[i+1]==0 && c[i+2]==0){
                        i=i+1;
                    }
                }
                continue;
                }//end of i<n
                else{
                    if(c[i]==0){
                        //path=path+Integer.toString(i);
                    count++;}
                }
            }
            //System.out.println(path);
            return (count-1);

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] c = new int[n];

        String[] cItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int cItem = Integer.parseInt(cItems[i]);
            c[i] = cItem;
        }

        int result = jumpingOnClouds(c);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
