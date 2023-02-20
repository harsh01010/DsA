#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void addEdge(vector<pair<int,int>>graph[],int u,int v,int wt)
{
    graph[u].push_back({v,wt});
    graph[v].push_back({u,wt});

}

void printGraph(vector<pair<int,int>>graph[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<": ";
        for(auto it:graph[i])
        {
            cout<< "("<<it.first<<" "<<it.second<<") ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n = 3;
    vector<pair<int,int>>graph[n];
    
    addEdge(graph,0,1,45);
    addEdge(graph,1,2,44);
    addEdge(graph,2,0,9);
    printGraph(graph,n);


return 0;
}