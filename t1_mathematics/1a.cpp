#include<iostream>
  using namespace std;
     
  bool func(int n){
       int rev=0;
        int temp =n;
         while(n>0){
              rev = rev*10 + n%10;
              n/=10;
         }
         return (temp==rev);
  }

      int main(){

         int n;
         cin>>n;
         if(func(n)) cout<<"yes"<<endl;
         else cout<<"no"<<endl;


            return 0;
      }