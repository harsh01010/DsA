#include<bits/stdc++.h>
#define ll long long
using namespace std;


int ropeCut(int n, int a ,int b ,int c){
    if(n==0)
     return 0;
     if(n<0)
       return -1;
       int res = max (  ropeCut(n-a , a ,b ,c),    ( max(ropeCut(n-b,a,b,c),ropeCut(n-c,a,b,c) )  ) );
       if(res<0)
        return -1;
        else 
        return res + 1;
}

int main()
{   int t;
    cin>>t;
      while(t--){
          int n;
             int a ,b ,c;
               cin>>n>>a>>b>>c;
               cout<<ropeCut(n,a,b,c)<<endl;      // this has O(3^n) time complexity , it is solved using dynamic programming.
      }

 


return 0;
}