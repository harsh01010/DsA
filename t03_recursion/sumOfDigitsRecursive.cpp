#include<iostream>
using namespace std;

  int sumOfDigit(int n){
       if(n==0)
         return n;
      return (n%2) + sumOfDigit(n/2);
  }

int main(){
   int n;
     cin>>n;
      int sum =   sumOfDigit(n);
      cout<<sum<<endl;

    return 0;
}
// iterative solution is preferred because of the aux space.