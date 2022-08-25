//computing power
#include<bits/stdc++.h>
using namespace std;

long long power(int n,int nn){
   if(nn==0) return 1;
   if(nn%2==0) return power(n,nn/2)*power(n,nn/2);
    //return power(n,nn-1)*n;
    
     // 2^9 = 2 * 2^9/2 * 2^9/2

     // nn odd case
     return power(n,nn/2)*power(n,nn/2)*n;


}

int main(){
   int n,nn;
    cin>>n>>nn;
     cout<<power(n,nn);
    return 0;
}