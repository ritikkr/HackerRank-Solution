#include <iostream>
using namespace std;
int main()
{
   int n,a[100];
    cin >> n;
    cin.ignore();
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   // cout<<n<<endl;
     int b[100],r;
      for(i=0;i<n;i++){
       b[i]=a[i];
    }
      for(i=0;i<n;i++){
        r=b[i]%5;
        if(r!=0){
            b[i]=b[i]-r+5;
        }
    }
 
     for(i=0;i<n;i++){
        if(a[i]<38){
            
        }
      else{
          if(b[i]-a[i]<3)
        a[i]=b[i];
      }
      
    }
     for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
