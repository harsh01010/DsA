#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


bool solve(void)
{
     int n ,s ; cin>>n>>s;
     int arr[n];
     for(int i=0;i<n;i++) cin>>arr[i];
       int presum=0;
         unordered_set<int>unset;
          for(int i=0;i<n;i++)
          {
                presum+=arr[i];
                if( unset.find(presum-s) != unset.end()) 
               {   // arr[i] ke prefix sum tk , ek subarry hai given sum ka.
                return true;
               }
               else if(presum == s) return true;
               unset.insert(presum);
          }
          return false;
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

    int t; cin>>t;
    while(t--)
    {
       solve()?cout<<"YS\n":cout<<"NA\n";
    }



return 0;
}