#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void snake_pattern(vector<vector<int>>arr)
{    cout<<"\n";
      for(int i=0;i<arr.size();i++)
      {
           if(i%2 == 0)
           {
              for(int j=0;j<arr[i].size();j++)
                cout<<arr[i][j]<<" ";
           }
           else{
              for(int j= arr[i].size()-1;j>=0;j--)
                cout<<arr[i][j]<<" ";
           }
           cout<<"\n";
      }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif
    
     vector<vector<int>>arr;
       int n , m; cin>>n>>m;

        for(int i=0;i<n;i++)
        {
              vector<int>tp;
             for(int i=0;i<m;i++)
             {
                 int x; cin>>x; tp.push_back(x);
             }
             arr.push_back(tp);
        }
      
        snake_pattern(arr);
    
    


return 0;
}