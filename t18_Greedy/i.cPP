#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void topo(vector<int>adj[],int n)
{
    
    vector<int>indeg(n,0);
    vector<int>outdeg(n,0);
    for(int i=0;i<n;i++)
    {
        outdeg[i] = adj[i].size();
        for(int j=0;j<adj[i].size();j++)
            indeg[adj[i][j]]++;
    }

    cout<<"\nindegree \n";
    for(auto it:indeg){
        cout<<it<<" ";
    }
    cout<<"\noutdegree\n";
    for(auto it:outdeg){
        cout<<it<<" ";
    }
    cout<<"\n\n";

    queue<int>q;

    for(int i =0;i<n;i++)
    {
        if(indeg[i]==0) q.push(i);
    }
    while(q.size())
    {
        int x = q.front(); q.pop();
        printf("%d ",x);
        for(int i=0;i<adj[x].size();i++)
        {
            indeg[adj[x][i]]--;
            if(indeg[adj[x][i]] == 0)
                q.push(adj[x][i]);
        }

    }
}

int main()
{
    


    vector<int>adj[8];
    adj[0]  = {1,2,5};
    adj[1] = {5};
    adj[2] = {5,6};
    adj[3] = {6};
    adj[4] = {2,3};
    adj[5] = {6,7};
    adj[6] = {7};
    adj[7] = {};

    topo(adj,8);

return 0;
}