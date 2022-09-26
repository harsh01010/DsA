#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
     int n; cin>>n;
       int arr[n];

       for(auto &it:arr) cin>>it;
      /*
       cout<<"using unordered map:\n";
       unordered_map<int,int>mp;
       for(auto it:arr)   mp[it]++;
       

       cout<<mp.size()<<"\n";
       cout<<"using unordered set:\n";
       unordered_set<int>us;
        for(auto it:arr) us.insert(it);
        cout<<us.size()<<"\n";
        */

       unordered_set<int>uns(arr,arr+n);
       cout<<uns.size()<<"\n";
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
