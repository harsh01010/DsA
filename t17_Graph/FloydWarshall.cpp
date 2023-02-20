#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// floyd warshall algorithm to find sortest path between every pair of vertex

vector<vector<int>> warshall(vector<pair<int,int>>*arr,int n)
{
    vector<vector<int>>res(n,vector<int>(n,1e8));
    
    for(int i=0;i<n;i++)
    {
        res[i][i] = 0;
        for(auto  it:arr[i])
        {
            res[i][it.first]=it.second;
        }
    }

    for(int via=0;via<n;via++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int curr = res[i][j];
                res[i][j] = min(curr,res[i][via]+res[via][j]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(res[i][j]==1e9) res[i][j]=-1;
        }
    }

    return res;
}

int main()
{

    int n=4;
    vector<pair<int,int>>arr[n];

    arr[0] = {{1,4},{2,5}};
    arr[1] = {{3,3}};
    arr[2] = {{3,6}};
    arr[3] = {{0,6}};

    vector<vector<int>>ShortestPths = warshall(arr,n);
    for(auto it:ShortestPths)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }



return 0;
}