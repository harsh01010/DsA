// Adjacencey List implementation
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void addEdge(vector<int>arr[],int u,int v)
{
    arr[u].push_back(v); // adding an edge between u and v
    arr[v].push_back(u); // adding an edge between v and u because graph is undirected
}

void printGraph(vector<int>arr[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i<<": ";
        for(auto it:arr[i])
        cout<<it<<' ';
        cout<<"\n";
    }
}
int main()
{
    int v = 4; // number of vertices

    vector<int>arr[v]; // array of vector
    
    addEdge(arr,0,1);
    addEdge(arr,1,2);
    addEdge(arr,2,3);
    addEdge(arr,3,0);

    printGraph(arr,v);



    return 0;
}