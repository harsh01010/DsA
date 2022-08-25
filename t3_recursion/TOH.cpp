#include<bits/stdc++.h>
using namespace std;
   //Tower of hanoi problem.

  int func(int n , char beg  = 'A', char aux = 'B' , char end = 'C'){
      static int cnt = 0;
      if(n>=1){
          func(n-1, beg,end,aux);
          cout<<"move "<<n<<" from "<<beg<<" to "<<end<<endl;
           cnt++;
          func(n-1,aux,beg,end);
      }
      return cnt;
  }
int main(){
   
    int n;
      cin>>n;
        int noOfSteps= func(n);
         cout<<"total number of steps involved = "<<noOfSteps<<endl;
   
    return 0;
}