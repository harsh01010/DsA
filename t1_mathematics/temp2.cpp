#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ll computepow(int a , int m){
//       ll res=1;
//       while(m!=0){
//           if(m&1) res*=a;
//           a*=a;
//           m>>=1;
//       }
//       return res;
// }
// ll computeLastdigM(ll n ,ll k , ll lastM){
//      n%=lastM;
//         ll res=1;
//          while(k>0){
//              if(k&1) res = ((res%lastM)*(n%lastM))%lastM;
//               n = ( (n%lastM)*(n%lastM) )%lastM;
//               k>>=1;
//          }
//          return res;
// }
// int main(){
// ll n , k , m;
//   cin>>n>>k>>m;
//   cout<<computepow(10,m)<<endl;
//   cout<<computeLastdigM(n,k,computepow(10,m));
//     return 0;
// }


int main(){
  

  int n , k;
    // n^k -> no of digits.
    cin>>n>>k;
    if(k==0) cout<<"1"<<endl;
    else{
    double y = ((double)k*log10(n*1.0));
    y = y - (ll)y;
    double temp = pow(10.0 , y);
    cout<<temp<<endl;
    
    }
    return 0;

}