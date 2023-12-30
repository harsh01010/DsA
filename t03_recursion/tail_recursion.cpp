#include<bits/stdc++.h>
using namespace  std;


// non tail
 void func(int n){
     if(n==0)
      return;
      func(n-1);
      cout<<n<<"\t";
 }
 // tail recursion
 void fun(int n){
     if(n==0)
      return;
      
      cout<<n<<"\t";
      fun(n-1);       // recursion happens at last, noting happens after or along with recursion.
 }

int main(){

   int n , nn;
     cin>>n>>nn;
      func(n);
      fun(nn);

    return 0;
}