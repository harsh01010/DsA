                    /*
              N bonacci number
          given n and k
        first n numbers are 0 ,0, 0,....n-1 times , 1
      e,g n=2 >  0 1 1 2 3 5 8......   fibonacci
          n=3 >  0 0 1 1 2 4 7 13......
                                    


                                    */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> solve(int n , int m){
       vector<int>bonacci(m , 0);
           bonacci.at(n-1) = 1;
           bonacci.at(n)=1;
           for(int i=n+1;i<m;i++){
                bonacci.at(i) = 2*bonacci.at(i-1) - bonacci.at(i-1-n);
           }
           return  bonacci;         
}
int main()
{
     int n ,m;
      cout<<"enter the value of n and m\n";
       cin>>n>>m;

       vector<int>ans = solve(n,m);  
     cout<<"the "<<n<<" bonacci series is :\n";
      for(int i=0;i<m;i++){
        cout<<ans.at(i)<<" ";
      }
      cout<<"\n";
return 0;
}