#include<iostream>
#define ll long long
#define REP(a,n)  for(long long int i=a;i<n;i++)
using namespace std;
  //iterative
    int gcdI(int a ,int b){
        while(b){
          a=a%b;
          swap(a,b);
        }
        return a;
    }
  // recursive
  int gcd(int a ,int b){
      return b?gcd(b,a%b):a;
  }
  //lcm
  int lcm(int a , int b){
      return a*b / gcd(a , b);
  }

int main()
{
     int a ,b;
       cin>>a>>b; 
         //cout<<lcm(a,b)<<endl;
           cout<<gcdI(a,b)<<endl;


return 0;
}