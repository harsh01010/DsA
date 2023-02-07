/*
Input: n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2
Output: true
Explanation: There are two paths from vertex 0 to vertex 2:
- 0 → 1 → 2
- 0 → 2

build adjacency list and traverse using bfs from source.
if visited[destination] is 1 then there will be a path otherwise not.
*/
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
{
    vector<int> arr[n];
    int x = edges.size();
    for (int i = 0; i < x; i++)
    {
        arr[edges[i][0]].push_back(edges[i][1]);
        arr[edges[i][1]].push_back(edges[i][0]);
    }

    int visited[n];
    for (auto &it : visited)
        it = 0;
    visited[source] = 1;

    queue<int> q;
    q.push(source);
    while (q.size())
    {
        int x = q.front();
        q.pop();
        for (auto it : arr[x])
        {
            if (!visited[it])
            {
                visited[it] = true;
                q.push(it);
            }
        }
    }
    return visited[destination] == 1;
}
int main()
{

    return 0;
}