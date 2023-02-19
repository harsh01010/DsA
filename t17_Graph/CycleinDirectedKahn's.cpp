#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// cycle detection in a directed acyclic graph using kahn's algorithm
/*
topological sorting can only be found in case of DAG , we will use this idea to  solve this problem.
*/

bool isCyclic(vector<int> arr[], int n)
{
    vector<int> indeg(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto it : arr[i])
            indeg[it]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    int cnt = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cnt++;

        for (auto it : arr[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }

    return n==cnt;

}

int main()
{

    return 0;
}