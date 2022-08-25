#include<bits/stdc++.h>
using namespace std;


 void fun(int n){
     if(n==0)
     return;
     //cout<<n<<"\t";
     fun(n-1);
     cout<<n<<"\t";
     
 }
int main(){
  int n;
    cin>>n;
    fun(n);

    return 0;
}