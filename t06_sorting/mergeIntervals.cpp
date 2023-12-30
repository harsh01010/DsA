#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

       int n;
        cin>>n;
    pair<int,int>arr[n];
     
     for(int i=0;i<n;i++)
     {
         int a ,b; 
         cin>>a>>b;
         arr[i].first = a; arr[i].second = b;
     }
     sort(arr,arr+n);
     //for(int i=0;i<n;i++) cout<<arr[i].first<<" "<<arr[i].second<<"\n";

     int res = 0;

      for(int i=1;i<n;i++)
      {
           if(arr[res].second>=arr[i].first)
           {
                 arr[res].first = min(arr[i].first,arr[res].first);
                 arr[res].second = max(arr[i].second,arr[res].second);
           }
           else{
              res++; arr[res] = arr[i];
           }
      }
      for(int i=0;i<=res;i++) cout<<arr[i].first<<" "<<arr[i].second<<"\n";




return 0;
}