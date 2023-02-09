#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
7
5
0 1
2 3
4 5
5 6
4 6
*/

void DFS(vector<int>arr[],int i,int visited[],int &cmpCnt)
{
    if(visited[i]==1) return;
    visited[i] = 1;
    cmpCnt++;
    for(auto it:arr[i])
    {
        DFS(arr,i,visited,cmpCnt);
    }

}

int possiblePairs(vector<pair<int,int>>same,int n,int c)
{
    vector<int>arr[n];
    for(int i=0;i<c;i++)
    {   
        arr[same[i].first].push_back (same[i].second);
        arr[same[i].second].push_back(same[i].first);
        
    }
    int  visited[n] = {0};

    int cmpCnt=0;
    vector<int>cntArr;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {DFS(arr,i,visited,cmpCnt);
        cntArr.push_back(cmpCnt);
        cmpCnt=0;}
    }
    long long int ans=0;
}
int main()
{

    int n;
    int c;
    vector<pair<int,int>>same;
    cin>>n>>c;
    for(int i=0;i<c;i++)
    {
        pair<int,int>p;
        cin>>p.first>>p.second;
        same.push_back(p);
    }



    



return 0;
}