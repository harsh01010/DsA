#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


void topo(vector<int>arr[],int n)
{
    vector<int>indeg(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto it:arr[i])
        {
            indeg[it]++;
        }
    }
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        if(indeg[i]==0) q.push(i);
    }
    while (q.size())
    {
        int x = q.front(); q.pop();
        cout<<x<<" ";
        for(auto it:arr[x])
        {
            indeg[it]--;
            if(indeg[it]==0)
            q.push(x);
        }
    }
    
}

int main()
{





return 0;
}