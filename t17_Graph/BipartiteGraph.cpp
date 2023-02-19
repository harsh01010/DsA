#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
    bipartite garph:
    -> 2 colorable or graph which does not contain odd length  cycle

    insted of visited array , store colors of vertices.
*/

bool dfs(vector<int>arr[],int i,vector<int>&col,int  c)
{
    col[i] = c;
    for(auto it:arr[i])
    {
        if(col[it]==-1)
        {
            if(!dfs(arr,it,col,!c)) return false;
        }
        else if(col[it]==c) return false;
    }
    return true;
}

bool bipartite(int n , vector<int>arr[])
{
    vector<int>col(n,-1);
    for(int i=0;i<n;i++)
    {
        if(col[i]==-1)
        {
            if(!dfs(arr,i,col,0))
                return false;
        }
    }
    return true;
}

int main()
{


return 0;
}