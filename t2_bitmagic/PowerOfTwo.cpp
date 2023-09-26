#include<bits/stdc++.h>
using namespace std;

//power of two.
int main(){
     int n;
        cin>>n;
                  if(n==0) printf("no\n");
                  
          else if( ( n & (n-1) ) == 0 )  cout<<"yes"<<endl;
           else  cout<<"No"<<endl;

    return 0;
}