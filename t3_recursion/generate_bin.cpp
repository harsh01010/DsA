#include<bits/stdc++.h>
using namespace std;
// recursive code to create binary equivalent of a inputed number.

void func(int n){
    if(n==0)
    return;
    func(n/2);
    cout<<(n%2);
}

int main(){
     int n;
      while( cin>>n)
         func(n); 
}