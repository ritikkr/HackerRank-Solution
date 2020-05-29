#include <iostream>
#include <cstdio>
using namespace std;
#include<iomanip>
#include<bits/stdc++.h>
int main() {
    // Complete the code.
    int a;char c;long l;float f;double d;
    cin>>a;
    cin>>l;
    cin>>c;
    cin>>f;
    cin>>d;
    cout<<a;
    cout<<"\n";
    cout<<l;
    cout << "\n";
    cout<<c;
    cout << "\n";
    cout.setf(ios::fixed);
    cout <<setprecision(6)<<f;
    cout<<"\n";  
    cout<<setprecision(14)<<d;

}

