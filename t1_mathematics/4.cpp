#include<iostream>
#define ll long long
#define REP(a,n)  for(long long int i=a;i<n;i++)
using namespace std;

bool chk_prime(int n){
       if(n<2)  return false;
       if(n==2 || n==3) return true;

       if(n%2 == 0 || n%3 == 0)  return false;

       for(int i=5;i*i<=n;i+=6){
           if(n%i==0 || n%(i+2)==0) return false;
       }
       return true;
}

int main()
{
    int n;
    int t;
      cin>>t;
       while(t--){
      cin>>n;
      if(chk_prime(n))  cout<<"prime"<<endl;
      else  cout<<"not prime"<<endl;
       }


return 0;
}