#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

//use bfs and keep track of time

bool valid(int i,int j,int n,int m)
{
    return i>=0 && j>=0 && i<n && j<m;
}
int f(vector<vector<int>>arr)
{
    int n = arr.size(),m=arr[0].size();
    vector<vector<int>>brr(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>>q;
    int f = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==2)
            {
                brr[i][j]=1;
                q.push({{i,j},0});
            }
            else if(arr[i][j]==1) f++;
        }
    }

    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};
    int r = 0;
    int ans=0;
    while(!q.empty())
    {
        int i = q.front().first.first;
        int j = q.front().first.second;
        ans = q.front().second;
        q.pop();
        for(int k=0;k<4;k++)
        {
            int ni = i+dx[k];
            int nj = j+dy[k];
            if(valid(ni,nj,n,m)&&!brr[ni][nj]&&arr[ni][nj]==1)
            {
                brr[ni][nj] = 1;
                q.push({{ni,nj},ans+1});
                r++;
            }
        }
    }
    return f==r?ans:-1;
}
int main()
{

    vector<vector<int>>oranges{{1},{2}};
    
    int time = f(oranges);
    cout<<time<<"\n";



return 0;
}