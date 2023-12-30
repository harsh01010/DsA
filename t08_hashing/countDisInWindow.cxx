#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void countInWindow(int arr[] , int n, int k)
{
      unordered_map<int,int>ump;

        for(int i=0;i<k-1;i++) ump[arr[i]]++;

          for(int i=0,j=k-1;j<n;j++,i++)
          {
              ump[arr[i]]++;
              cout<<ump.size()<<" ";

              if(ump[arr[i]] == 1) ump.erase(arr[i]);
              else ump[arr[i]]--;
          }
          
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

       int n;
         cin>>n;
           int arr[n];
           for(auto &it:arr) cin>>it;
           int k ; cin>>k;



return 0;
}