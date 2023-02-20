#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void preorder(vector<int>*arr,int i,unordered_set<int>&vis,int &curr)
{
    curr++;
    vis.insert(i);
    for(auto it:arr[i])
    {
        if(vis.find(it)==vis.end())
        {
            preorder(arr,it,vis,curr);
        }
    }
}

void Components(vector<int>*arr,int n)
{
    int totalComp=0;
    int currComp=0;
    unordered_set<int>st;
    for(int i=0;i<n;i++)
    {
        if(st.find(i)==st.end())
        {
            preorder(arr,i,st,currComp);
            totalComp++;
            cout<<"number of vertices in 1st component:- "<<currComp<<"\n";
            currComp=0;
        }

    }
    cout<<"total number of components:- "<<totalComp<<"\n";

}

int main()
{

vector<int>graph[5];
graph[0] = {1,2};
graph[1] = {0,2};
graph[2] = {0,1};

graph[3] = {4};
graph[4] = {3};

Components(graph,5);

    



return 0;
}