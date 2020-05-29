#include<iostream>
using namespace std;
int main(){
int a[100],b[100];
int i,alice=0,bob=0,sum;
for(i=0;i<3;i++){
    cin>>a[i];
}
for (i = 0; i < 3; i++) {
  cin >> b[i];
}
for(i=0;i<3;i++){
if((a[i]>=1||a[i]<=100)&&(b[i]>=1||b[i]<=100)){

//cout<<"Alice="<<alice<<ends<<"And bob ="<<bob;
for(i=0;i<3;i++){
if(a[i]>b[i]){
    alice++;
}
else if(a[i]<b[i]){
    bob++;
}
else{
    sum++;
}
}
cout<<alice<<" "<<bob;
}
else {
  exit(0);
}}
return 0;
}
