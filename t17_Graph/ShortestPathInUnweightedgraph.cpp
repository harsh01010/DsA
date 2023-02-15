#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

//Shortest Path in an Unweighted Graph
//use BFS
void PrintShortestPath(vector<int>arr[],int n,int src)
{
    vector<int>vis(n,0);
    queue<pair<int,int>>q;
    q.push({src,0});
    vis[src] = 1;
    while(!q.empty())
    {
        pair<int,int>p = q.front();
        q.pop();
        cout<<"from "<<src<<" to "<<p.first<<" shortest path is of length: "<<p.second<<"\n";
        for(auto it:arr[p.first])
        {
            if(!vis[it])
            {
                vis[it] = 1;
                q.push({it,p.second+1});
            }
        }
    }
}

int main()
{
    
    vector<int>arr[6];
    arr[0] = {1,2,4};
    arr[1] = {0,3};
    arr[2] = {0,3,4};
    arr[3] = {1,2,5};
    arr[4] = {0,2,5};
    arr[5] = {3,4};

    PrintShortestPath(arr,6,0);



return 0;
}