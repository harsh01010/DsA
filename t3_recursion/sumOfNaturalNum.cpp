#include<bits/stdc++.h>
using namespace std;


   int func(int n,int k=1){
       if(n==1)
        return k;
        return func(n-1 , k+n);
        /* / non tail/
         if(n==0)
          return 0;
          return n + func(n-1);
          */
   }

int main(){
     int n;
       cin>>n;
        cout<<func(n)<<endl;

    return 0;
}