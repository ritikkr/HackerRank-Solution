#include <iostream>
#include <cstring>
using namespace std;

int main() {
 char s1[1000];
 char s2[1000];
 char s3[10000];
 char s4[10000];
 cin>>s1;
 cin>>s2;
 
   int l,m,i;
   l=strlen(s1);
   m=strlen(s2);
   cout<<l;
   cout<<" ";
   cout<<m<<endl;
for(i=0;i<10000;i++){
    s3[i]=s1[i];
}
for(i=0;i<10000;i++){
    s4[i]=s2[i];
}
   strcat(s1,s2);
   cout<<s1<<endl;
   s3[0]=s2[0];
   s4[0]=s1[0];
   cout<<s3<<" "<<s4<<endl;
       
    return 0;
}

