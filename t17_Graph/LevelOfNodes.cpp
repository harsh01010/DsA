#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
Given a Undirected Graph with V vertices and E edges, Find the level of node X. if X does not exist in the graph then print -1.
Note: Traverse the graph starting from vertex 0.

*/
int nodeLevel(int V, vector<int> adj[], int X)
{
    // code here
    int res = 0;
    queue<int> q;
    q.push(0);
    int arr[V] = {0};
    arr[0] = 1;
    while (q.size())
    {
        int s = q.size();
        while (s--)
        {
            int x = q.front();
            q.pop();

            if (x == X)
                return res;

            for (auto it : adj[x])
            {
                if (!arr[it])
                {
                    arr[it] = 1;
                    q.push(it);
                }
            }

            res++;
        }

        return -1;
    }
}
    int main()
    {

        return 0;
    }