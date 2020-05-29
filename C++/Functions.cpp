#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   int greatest=0;
    if (a > b && a > c && a > d) {
      greatest = a;
}
if(b>a && b>c && b>d){
  greatest = b;
}
if(c>a&&c>b&&c>d){
  greatest = c;
}

if(d>a&&d>b&&d>c){
  greatest = d;
}
cout<< greatest<<endl;
}
