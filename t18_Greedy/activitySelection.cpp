#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
    activity selection problem :
    given n activities with their starting and ending time.
    one can do only one task at once.
    a task lasts between starting and ending time inclusively.
    find maximum number of activity which can be completed.
    
*/

static bool comp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second != p2.second ? p1.second<p2.second : p1.first<p2.first;
}

int selection(vector<pair<int,int>>activity)
{
    int n = activity.size();
    sort(activity.begin(),activity.end(),comp);
    int res = 1;
    int p_end = activity[0].second;
    for(int i=1;i<n;i++)
    {
        int c_start = activity[i].first;
        if(c_start>p_end)
        {
            p_end = activity[i].second;
            res++;
        }
    }
    return res;
}


int main()
{
    
    int n; cout<<"enter the total number of activities: ";
    cin>>n;
    vector<pair<int,int>>activity;
    for(int i=0;i<n;i++)
    {
        int x , y;
        cout<<"ente the starting and ending time of activity: "<<i+1<<<" ";
        cin>>x>>y;
        activity.push_back({x,y});
    }




return 0;
}