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
1. You are given a number n (representing the number of students). Each student will have an id 
     from 0 to n - 1.
2. You are given a number k (representing the number of clubs)
3. In the next k lines, two numbers are given separated by a space. The numbers are ids of 
     students belonging to same club.
4. You have to find in how many ways can we select a pair of students such that both students are 
     from different clubs.

create a adjacency list , taking students as vertices and create a edge between two students if they belong to same club.
now do DFS and keep track of number of vertices in the each component.
calculate sum of product of possibe pair of number of vertices from different components taking two at a time.
*/

void DFS(vector<int>arr[],int i,int visited[],int &cmpCnt)
{
    if(visited[i]==1)return;
    visited[i] = 1;
    cmpCnt++;
    for(auto it:arr[i])
    {   
        DFS(arr,it,visited,cmpCnt);
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
    for(int i=0;i<cntArr.size();i++)
    {
        for(int j=i+1;j<cntArr.size();j++)
        {
            ans+=cntArr[i]*cntArr[j];
        }
    }
    return ans;
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
    int ans  =  possiblePairs(same,n,c);
    cout<<ans<<"\n";
return 0;
}