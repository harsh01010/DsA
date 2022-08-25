#include<iostream>
#define ll long long
#define REP(a,n)  for(long long int i=a;i<n;i++)
using namespace std;



int main()
{  int n;
    cin>>n;
      int i=2;
    for(;i*i<=n;i++){
        if(n%i==0)  cout<<i<<" ";   // dhyan dene wali baat, number ke factors pair me hote hai --> i , n / i --> agar i n ka factor hai to n/i bhi hoga.
    }
    

    for(;i>=2;i--){
        if(n%i==0){
            
              cout<<n/i<<" ";
        }
    }
  


return 0;
}


// dhyan dene wali baat, number ke factors pair me hote hai --> i , n / i --> agar i n ka factor hai to n/i bhi hoga.
    