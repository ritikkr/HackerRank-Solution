#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

		int a_count=0;
            int s_length=s.length();
            for(int i=0;i<s_length;i++){
                if(s[i]=='a'){
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
                    if(s[i]=='a'){
                        n_count++;
                    }
                }
                long total=a_count*(n/s_length)+n_count;
                return total;
            }
        
}

int main()
{
    string s;
    getline(cin, s);
    long n;
    cin >> n;
    long result = repeatedString(s, n);
    cout << result << "\n";
    return 0;
}

