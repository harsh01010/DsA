#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b)
{
    return a.first != b.first ? a.first<b.first:a.second<b.second;
}
void RoundRobin(int n,int tc,vector<pair<int,int>>process)
{
    sort(process.begin(),process.end(),comp);
    vector<pair<int,int>>solved;

    //bool started = false;
    unordered_map<int,int>tat;

    for(int i=1;i<=n;i++) tat[i]=0;
    
    while(1){
        bool idle = true;
        for(auto &it:process)
        {  //cout<<it.first<<" "<<it.second<<"\n";
            tat[it.first] += tc;
            if(it.second < tc && it.second !=0)
            {
                tat[it.first] += it.second;
                idle = false;
                it.second = 0;
            }
            else if(it.second>=tc)
            {
                idle = false;
                tat[it.first] += tc;
                it.second -= tc;
            }
            if(it.second == 0)
            {
                tat[it.first] -= tc;
                solved.push_back({it.first,tat[it.first]});
            }
        }
        //cout<<idle<<" ";
        if(idle) 
            break;
        
    }
    

    // printing the process execution details

    std::cout<<"process Id      TAT"<<"\n";
    unordered_set<int>printed;
    for(auto it:solved)
    {
        if(printed.find(it.first) == printed.end()){
        std::cout<<it.first<<"              "<<it.second<<"\n";
        printed.insert(it.first);
        }
    }


}

int main()
{

    const int tc = 3;
    vector<pair<int,int>>details;
    int n;
    std::cout<<"enter the total number of processes: ";cin>>n;
    for(int i=0;i<n;i++)
    {
        int pId,bt;
        // std::cout<<"Enter the process id and the burst time of "<<i+1<<"th process: ";
        cin>>pId>>bt;
        details.push_back({pId,bt});
    }

    RoundRobin(n,tc,details);


return 0;
}