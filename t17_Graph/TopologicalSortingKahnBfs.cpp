#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
Topological sorting :-  (only for Directed Acyclic graph)(DAG)(kahn's BFS)
            0
        /       \
        1       2

        0,1,2 or 0 ,2,1

    if we assume all the vertices as jobs then
    0 must be finish earlier than 1,2 and
    there is no dependency b/w 1,2 so they can be print in any order.

BFS based solution:-(Kahn's BFS Based Algortihm)
    1. Store indegree of every vertex
    2. create a queue , q
    3. add all 0 indegree vertices in the q
    4. while(q is not empty)
        {
            a> u = q.pop()
            b> print u
            c> for every adjacent v of u
                (i) reduce indegree of v by 1
                (ii) if indegree of  v becomes 0 add v to q.
        }
*/

void topological(vector<int> arr[], int n)
{
    int indeg[n] = {0};
    // calculating indegree
    for (int i = 0; i < n; i++)
    {
        for (auto it : arr[i])
        {
            indeg[it]++;
        }
    }

    // inserting 0 indegree vertices in the queue
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        int u = q.front();
        cout<<u<<" ";
        q.pop();
        cout << u << " ";
        for (auto it : arr[u])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }
}

/*
using DFS:
    create an empty stack st
    for every vertex u , do following
        if(u is not visited)
            DFS(u,st)
    while (st in not empty)
        pop an item from st

    DFS(u,st)
        mark u as visted
        for every adjacent v of u
            if(v is not visted)
                DFS(v,st)
        push u to st
*/
void DFS(vector<int> arr[], int i, stack<int> &st, vector<int> &vis)
{
    vis[i] = 1;
    for (auto it : arr[i])
    {
        if (!vis[it])
        {
            DFS(arr, it, st, vis);
        }
    }
    st.push(i);
}

void topologicalDFS(vector<int> arr[], int n)
{
    vector<int> vis(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            DFS(arr, i, st, vis);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{

    vector<int> graph[6];
    graph[0] = {1, 2};
    graph[1] = {3};
    graph[2] = {3};
    graph[3] = {4, 5};
    graph[4] = {};
    graph[5] = {};

    topological(graph, 6);
    topologicalDFS(graph, 6);

    return 0;
}
