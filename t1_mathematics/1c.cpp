#include<iostream>
#include<cmath>
using namespace std;
     int count(int n){
           int i=1;
           int x=0;
             for(i=5;i<=n;i*=5)
             {
                 x = x + n/i;
             }
             return x;
     }
int main(){
   int n;
     cin>>n;
       cout<<count(n)<<endl;
    return 0;
}