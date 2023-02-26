#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
Minimum spanning tree using prim's algorithm:

spanning tree: it is a subgraph of given graph which is a tree , such that it contains all vertices,since it is a tree it contains exactly v-1 edges.
Minimum spanning tree:
    let's consider a weighted graph , we know there could be multiple spanning trees but from those the minimum spannig tree will be that  which has least weight sum of edges.

prim's algorithm:
    .> It is a greedy algorithm.

    1.Choose any vertex as starting vertex(we have choosed 0) and create a set containing all its adjacent vertices.
    2.Find the vertex which has the minimum weight edge connected to it.Add this vertex to the set.
    Repeat Step 2 for all the adjacent vertices of the newly added vertex.
    Continue until you have reached all the vertices.
    Calculate the total weight of the tree formed from using the edges chosen from Step 2.

    ///////
    ->maintain 2 sets
        one to check status of current spanning tree.
        other to get the minimum weight.


*/

int minimumCost(vector<vector<int>>&adj,int v)
{
    int key[v];
    fill(key,key+v,INT_MAX);
    key[0] = 0;
    bool currMst[v] = {false};
    int res = 0;

    for(int i=0;i<v;i++)
    {
        int u = -1;
        // finding the least weight edege in current mst
        for(int j=0;j<v;j++)
        {
            if(!currMst[i] &&(u==-1 or key[u]<key[i]))
                u=i;
        }

        res+=key[u];
        currMst[u] = true; // marking the vertex that has been just added in curr mst

        //updating the weights in currmst after addition of a new verted
        for(int V = 0;V<v;V++)
        {
            if(adj[u][V]!=0)
                key[V] = min(adj[u][V],key[V]);
        }
    }
    return res;
}


int main()
{

    vector<vector<int>>graph({{ 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },});
                    
    int minimumWeightSum = minimumCost(graph,4);
    cout<<minimumWeightSum<<'\n';



return 0;
}