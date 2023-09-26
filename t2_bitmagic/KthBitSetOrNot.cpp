#include<bits/stdc++.h>
using namespace std;
// check kth bit set or not.
  bool check(int n, int k){
      return  n& (1<<(k-1)) ;  
  }

  bool check2(int n, int k){
       return  (n>> (k-1) )& 1;
  }
int main(){
     int n,k;
       cin>>n>>k;
        check(n,k) ? cout<<"yes"<<endl:cout<<"NO"<<endl;
           check2(n,k)?cout<<"yes"<<endl:cout<<"nO"<<endl;
    return 0;
}