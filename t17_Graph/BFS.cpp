#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
    BFS :
    for TREE -> level order traversal
    for graph -> print a vertex and it's adjacent vertices at a time.
*/

void BFS(vector<int> arr[], int v, int s = 0) // s = source -> s = 0
{

    unordered_map<int, bool> ump; // we can create an array also where indices will represent vertex and place a boolean value at arr[i].
    for (int i = 0; i < v; i++)
        ump[i] = false;

    queue<int> q;
    q.push(s);
    ump[s] = true;
    while (q.size())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (auto it : arr[x])
        {
            if (!ump[it])
            {
                q.push(it);
                ump[it] = true;
            }
        }
    }
}

int main()
{

    return 0;
}