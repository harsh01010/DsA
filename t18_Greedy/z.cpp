#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool fun(int n,vector<int>arr[])
{
    
     int indeg[n] = {0};
    
    for (int i = 0; i < n; i++)
    {
        for (auto it : arr[i])
        {
            indeg[it]++;
        }
    }

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

int main()
{
   
    



return 0;
}