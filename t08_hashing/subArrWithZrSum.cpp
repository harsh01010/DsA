#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


bool solve(void)
{  int  n; cin>>n;
  int arr[n]; for(auto &it:arr) cin>>it;

       unordered_set<int>unset;
           int presum = 0;
            for(int i=0;i<n;i++)
            {
                 presum+=arr[i];
                 if(unset.find(presum)!= unset.end()) return true;
                 else if(presum == 0) return true;
                 unset.insert(presum);
            }
            return false;
     
}
int main()
{
 

  
    int t; cin>>t;
     while(t--)
     {
        if(solve()) cout<<"YES\n";
        else cout<<"NO\n";
     }


return 0;
}