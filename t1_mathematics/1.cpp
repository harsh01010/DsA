#include<iostream>
#define ll long long
#define REP(a,n)  for(long long int i=a;i<n;i++)
#include<cmath>
using namespace std;

  int digit1(int n){
     int d;
   d = 0;
     while(n!=0){
           n/=10;
           d++;
     }
     return d;

  }


   int digit2(int n){
       if(n==0)  return 0;             //inefficinet;
       else return 1 + (n/10);
   }

     int digit3(int n){

    return floor(log10(n) + 1);
     }
int main()
{

      //finding the number of digits

        int n;
          cout<<"enter the number"<<endl;
          cin>>n;

          cout<<digit1(n)<<endl;
          cout<<digit2(n)<<endl;
          cout<<digit3(n)<<endl;

return 0;
}