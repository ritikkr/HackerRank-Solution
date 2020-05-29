import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the bonAppetit function below.
    static void bonAppetit(List<Integer> bill, int k, int b) {
            int n=bill.size();
            int sum1=0,sum2=0;
            for(int i=0;i<n;i++){
                if(i!=k){
                    sum1=sum1+bill.get(i);
                }
                sum2=sum2+bill.get(i);
            }
            if(sum1/2==b){
                System.out.println("Bon Appetit");
            }
            else{
                System.out.println(sum2/2-sum1/2);
            }        
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String[] nk = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int n = Integer.parseInt(nk[0]);

        int k = Integer.parseInt(nk[1]);

        String[] billItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        List<Integer> bill = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int billItem = Integer.parseInt(billItems[i]);
            bill.add(billItem);
        }

        int b = Integer.parseInt(bufferedReader.readLine().trim());

        bonAppetit(bill, k, b);

        bufferedReader.close();
    }
}
