#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
There are a total of n tasks you have to pick, labeled from 0 to n-1. Some tasks may have prerequisites tasks, for example to pick task 0 you have to first finish tasks 1, which is expressed as a pair: [0, 1]
Given the total number of n tasks and a list of prerequisite pairs of size m. Find a ordering of tasks you should pick to finish all tasks.


*/
// solution using kahn's BFS

vector<int> findOrder(int n, int m, vector<vector<int>> pq)
{
    vector<int> ans;
    vector<int> graph[n];
    for (int i = 0; i < pq.size(); i++)
    {
        graph[pq[i][1]].push_back(pq[i][0]);
    }

    vector<int> indeg(n, 0);

    for (int i = 0; i < pq.size(); i++)
    {
        indeg[pq[i][0]]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        ans.push_back(x);
        for (auto it : graph[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }

    if (n == ans.size())
        return ans;
    return {};
}

int main()
{

    return 0;
}