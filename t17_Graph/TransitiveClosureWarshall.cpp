#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// use warshall , or can also solve using dfs
void TransitiveClosure(vector<int>arr[],int n)
{
    vector<vector<int>>res(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        arr[i][i] = 1;
        for(auto it:arr[i])
        {
            res[i][it] = 1;
        }
    }

    for(auto via=0;via<n;via++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j] = res[i][j] or (res[i][via]&&res[j][via]);
            }
        }
    }

    //printing the all reachable paths or transitive:
    for(auto it:res)
    {
        for(auto i:it)
        cout<<i<<" ";
        cout<<"\n";
    }
}

int main()
{

    int n=4;
    vector<int>arr[n];

    arr[0] = {1,2};
    arr[1] = {3};
    arr[2] = {3,};
    arr[3] = {0};

TransitiveClosure(arr,n);




return 0;
}