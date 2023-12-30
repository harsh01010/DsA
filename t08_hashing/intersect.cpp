#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif
     int t; cin>>t;
      while(t--)
      {

     int n1 , n2;  cin>>n1>>n2;
     int arr[n1] , brr[n2];
     for(auto &it:arr) cin>>it;
     for(auto &it:brr) cin>>it;

     unordered_set<int>set1;
      for(auto it:arr) set1.insert(it);

      int ans = 0;
       for(auto it:brr)
       {
          if(set1.find(it) != set1.end())
          {
               ans++;
               set1.erase(it); // if it is present in the array
                // then will remove remove it , because in the next iteration if duplicate is present
                // then we can avoid counting agian.
          }
       }
       cout<<ans<<"\n";

      }


return 0;
}