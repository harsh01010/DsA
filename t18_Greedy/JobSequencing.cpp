#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
Job sequencing problem :
    given each job's profit and deadline.
    each job takes 1 unit of time to execute.
    find maximum profit that can be make.

    sort the arr in decreasing order of the profit.
    create an array with all -1.
    now traverse the sorted array ,
    find appropriate position and put the and put the job overthere.
    

*/
struct job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

bool comp(job j1,job j2)
{
    return j1.profit != j2.profit ? j1.profit > j2.profit : j1.dead < j2.dead;
}
pair<int,int> jobSequencing(job arr[],int n)
{
    sort(arr,arr+n,comp);
    for(int i=0;i<n;i++)
    {
        cout<<"i = "<<i<<"\n";
        cout<<"id = "<<arr[i].id<<" deadline = "<<arr[i].dead<<" profit = "<<arr[i].profit<<"\n";
    }
    int maxDead = arr[0].dead;
    int cnt = 0;
    int res = 0;
    for(int i=1;i<n;i++)
        maxDead = max(maxDead,arr[i].dead);
    vector<int>seq(maxDead+1,-1);
    for(int i=0;i<n;i++)
    {
        int x = arr[i].dead;
        while(x >0 && seq[x] != -1)
            x--;
        if(x>0) {seq[x] = arr[i].dead; cnt++; res+=arr[i].profit;}
    }
    for(auto it:seq) cout<<it<<" ";cout<<"\n";
    return {res,cnt};

}

int main()
{
    int n; cin>>n;
    job j[n];
    for(int i=0;i<n;i++)
    {
        int id , d , p;
        cin>>id>>d>>p;
        j[i] = {id,d,p};
    }
    
    pair<int,int>p = jobSequencing(j,n);
    cout<<p.first<<"  "<<p.second<<"\n";


return 0;
}