#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
  int n ,s; cin>>n>>s;
   int arr[n]; for(auto &it:arr) cin>>it;
      unordered_set<int>unset;

        for(int i=0;i<n;i++)
        {
                 if(unset.find(s-arr[i]) != unset.end())
                 {
                    cout<<"YES\n"; return;
                 }
                 else unset.insert(arr[i]);
        }
        cout<<"NO\n";
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
