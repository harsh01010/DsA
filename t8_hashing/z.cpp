#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
     int n; cin>>n;
     int arr[n]; for(auto &it:arr) cin>>it;
     int brr[n]; for(auto &it:brr) cin>>it;

     for(int i=0;i<n;i++) brr[i]-=arr[i];
            sort(brr,brr+n);
     int cnt=0;

      int i= n-1 , j=0;
 
   for(int i=0;i<n;i++) cout<<brr[i]<<" ";
   cout<<"\n";
        while(i<j)
        {
              if(brr[i]+brr[j] >=0)
              {
                  cnt++;
                  i-- , j++;
              }
             else j++;
              
        }

        cout<<cnt<<"\n";


}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
