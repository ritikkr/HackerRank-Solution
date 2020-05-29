import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the migratoryBirds function below.
    static int migratoryBirds(List<Integer> arr) {
            int n=arr.size();
            int count[]={0,0,0,0,0};
            for(int i=0;i<n;i++){
                if(arr.get(i)==1){
                    count[0]=count[0]+1;
                }
                if(arr.get(i)==2){
                    count[1]=count[1]+1;
                }
                if(arr.get(i)==3){
                    count[2]=count[2]+1;
                }
                if(arr.get(i)==4){
                    count[3]=count[3]+1;
                }
                if(arr.get(i)==5){
                    count[4]=count[4]+1;
                }
            }//end of loop
            int max=count[0];
            for(int i=1;i<5;i++){
                if(count[i]>max){
                    max=count[i];
                }
            }
            int index=0;
            for(int i=0;i<n;i++){
                if(count[i]==max){
                    index=i+1;
                    break;
                }
            }
            return index;


    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int arrCount = Integer.parseInt(bufferedReader.readLine().trim());

        String[] arrItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        List<Integer> arr = new ArrayList<>();

        for (int i = 0; i < arrCount; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr.add(arrItem);
        }

        int result = migratoryBirds(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
