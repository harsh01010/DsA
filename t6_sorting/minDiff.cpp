#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int minDiff(int arr[],int n)
{
     int ans = INT_MAX;
      for(int i=1;i<n;i++)
       ans = min(ans,arr[i]-arr[i-1]);

       return ans;
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif
     int t;
      cin>>t;
      while(t--){
  
      int n;
         cin>>n; int arr[n]; for(int &it:arr) cin>>it; sort(arr,arr+n);
         cout<<minDiff(arr,n)<<"\n";
      }


return 0;
}