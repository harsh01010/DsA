#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


   // subarray with given sum
  int sum(vector<int>arr,int n,int k)
  {
       int pre = 0 , len = 0;
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
               pre+=arr[i];
                if(pre == k) len = i+1;
                else if( mp.find(pre-k) != mp.end())
                {
                      len = max(len,i-mp[pre-k]);
                }
               mp.insert({pre,i});
                
        }
        return len;
  }

  // for  max length subarray with  equal number of zero and one , replace zero with -1
  // and find maximum len subarray with zero sum


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

      
      int n , s; cin>>s>>s;
      vector<int>arr;
        for(int i=0;i<n;i++)
        {
              int e;
               cin>>e;
                 if(e== 0) arr.push_back(-1);
                 else arr.push_back(1);
        }

     cout<<sum(arr,n,s)<<"\n";


return 0;
}