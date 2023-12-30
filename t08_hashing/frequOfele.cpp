#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
      int n; cin>>n;
       int arr[n]; for(auto &it:arr) cin>>it;
       unordered_map<int,int>unm;
       for(auto it:arr)
        unm[it]++;

        for(auto it:unm)
         cout<<it.first<<" "<<it.second<<"\n";
         cout<<"\n";

    // for(auto i=unm.begin();i!=unm.end();i++)
    // cout<<i->first<<" "<<i->second<<"\n";
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
