#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define REP(a,n)  for(long long int i=a;i<n;i++)
using namespace std;

int digitsInFactorial(int n)
    {
        // code here
       if(n==0) return 1;
       else {
           double dig=0;
           for(int i=1;i<=n;i++){
               dig += (log10(i));
              // cout<<dig;
           }
           return floor(dig)+1;
       }}

int main()
{
     int n;
       cin>>n;
        cout<<digitsInFactorial(n);
    //cout<<(log10(4));
return 0;
}