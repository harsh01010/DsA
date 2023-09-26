#include<bits/stdc++.h>
using namespace std;
  //counting total number of setbits.
  //brian kerningam algorithm
  // theeta(set bits)
    int totalSetBits(int n){
             int count=0;
                 while(n){
                     n&=n-1;
                     count++;
                 }
                 return count;
   }
int main(){
    int n;
      cin>>n;
        cout<<totalSetBits(n)<<endl;

    return 0;
}