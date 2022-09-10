#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b)
{
       return
          a.first <= b.second;
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

        int n; cin>>n;
         pair<int,int> arr[n];
         for(int i=0;i<n;i++)
         {
             int a ,b; cin>>a>>b;
               arr[i].first = a , arr[i].second = b;
         }
         sort(arr,arr+n,comp);
      for(int i=0;i<n;i++) cout<<arr[i].first<<"  "<<arr[i].second<<"\n";


return 0;
}