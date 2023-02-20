#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define pvv  pair<vector<int>,vector<int>>

pvv inOut(vector<int>graph[],int n)
{
    vector<int>indeg(n,0);
    vector<int>outdeg(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto it:graph[i])
        {
            indeg[it]++;
            outdeg[i]++;
        }
    }
    return {indeg,outdeg};
}

int main()
{

int n= 5;
vector<int>graph[5];

graph[0] = {1,2};
graph[1] = {2};
graph[2] = {};

graph[3] = {4};
graph[4] = {};

pvv x = inOut(graph,5);

    for(int i=0;i<n;i++)
    {
        cout<<"indegree of vertex: "<<i<<" is: "<<x.first[i]<<"\n";
        cout<<"outdegree of vertex: "<<i<<" is: "<<x.second[i]<<"\n";

    }





return 0;
}