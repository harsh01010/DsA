#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;



int lsSum(int arr[],int n,int s)
{
          int res = 0 ,pre =0;
           unordered_map<int,int>mp;

           for(int i=0;i<n;i++)
           {
                pre+=arr[i];
                if(pre == s) res = i+1;
                else if(mp.find(pre-s) != mp.end())
                {
                       res = max(res , i-mp[pre-s]);
                }
                mp.insert({pre,i});
           }
           return res;

}
int main()
{
     int n,s; cin>>n>>s;
      int arr[n]; for(auto &it:arr) cin>>it;

      cout<<lsSum(arr,n,s)<<"\n";

        



return 0;
}