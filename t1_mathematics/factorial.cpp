#include<iostream>

int fact(int n){
         int fact=1;
           while(n!=0){
               fact*=n;
               n--;
           }
           return fact;
}

int factr(int n){
     if(n==0)  return 1;
      return factr(n-1)*n;
}
using namespace std;
  int main(){
     int n;
       cin>>n;
         cout<<fact(n)<<"\n"<<factr(n);
      return 0;

  }