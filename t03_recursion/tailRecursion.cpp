#include<bits/stdc++.h>
#define ll long long
using namespace std;

 void notTail(int n){
     if(n==0)
       return;
       notTail(n-1);
       cout<<n<<" ";
 }

 void Tail(int n , int k=1){
     if(n==0)
      return;
       cout<<k<<" ";
        Tail(n-1,k+1);
 }

 int fibNotTail(int n){
     return  (n==0 || n==1) ? 1 : n*fibNotTail(n-1);
 }

 int fibTail(int n , int k=1)
{
    if(n==0 || n==1)
      return k;   // k ki value return kareyege,
       return fibTail(n-1 , n*k);
}


int main()
{


   int a ,b ,c ,d;
    cout<<"enter the value of a , b ,c d"<<endl;
     cin>>a>>b>>c>>d;
      cout<<"printing the results\n";
   // not tail
     notTail(a);
     cout<<"\n";
   // tail
      Tail(b);
   // fibnottail
      cout<<"\n"<<fibNotTail(c)<<endl;
    // fibtail
    cout<<"\n"<<fibTail(d)<<endl;


return 0;
}