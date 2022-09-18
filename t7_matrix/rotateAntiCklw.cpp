#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void roRev(vector<vector<int>>&arr)
{
       for(int i=0;i<arr.size();i++)
       {
              for(int j=0;j<arr[i].size()/2;j++)
              {
                      swap(arr[i][j] , arr[i][arr[i].size()-1-j]);
              }
       }
}

void rotOrTrps(vector<vector<int>>&arr)
{
          for(int i=0;i<arr.size();i++)
          {
                 for(int j=i+1;j<arr.size() ;j++)
                   swap(arr[i][j],arr[j][i]);
          }
}

void pirnt(vector<vector<int>>arr) 
{
       for(int i=0;i<arr.size();i++)
       {
            for(int j=0;j<arr[i].size();j++) cout<<arr[i][j]<<" "; cout<<"\n";
       }
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

      int n , m;
       cin>>n>>m;
        vector<vector<int>>arr;
         for(int i=0;i<n;i++)
         {
            vector<int>tp;
              for(int j=0;j<m;j++)
              {
                 int x; cin>>x;
                  tp.push_back(x);
              }
              arr.push_back(tp);
         }
           roRev(arr);
           rotOrTrps(arr);
           pirnt(arr);



return 0;
}