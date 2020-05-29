import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the repeatedString function below.
    static long repeatedString(String s, long n) {
            int a_count=0;
            int s_length=s.length();
            for(int i=0;i<s_length;i++){
                if(s.charAt(i)=='a'){
                    a_count++;
                }
            }
            if(n%s_length==0){
                return a_count*(n/s_length);
            }
            else{
                long r=n%s_length;
                int n_count=0;
                for(int i=0;i<r;i++){
                    if(s.charAt(i)=='a'){
                        n_count++;
                    }
                }
                long total=a_count*(n/s_length)+n_count;
                return total;
            }
        
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        long n = scanner.nextLong();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        long result = repeatedString(s, n);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
