// hamiltonian path and cycle
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void DFS(vector<int>arr[],int n,unordered_set<int>&st,int src,vector<int>psf,int osrc)
{
    psf.push_back(src);
    st.insert(src);
    if(psf.size()==n)
    {
        for(auto it:psf) cout<<it<<" ";
        bool cycle = false;
        for(auto it:arr[src])
        {
            if(it == osrc) cycle = true;
        }
        if(cycle)cout<<"*\n";
        else cout<<".\n";

        //return;
    }

    for(auto it:arr[src])
    {
        if(st.find(it)==st.end())
        DFS(arr,n,st,it,psf,osrc);
    }
    st.erase(src);
    //cout<<"hello\n";

}

void PrintHamiltonian(vector<int>arr[],int n)
{
    unordered_set<int>st;
    vector<int>psf;
    int src = 0 , osrc = 0;
    DFS(arr,n,st,src,psf,osrc);
}

int main()
{

    int n = 5;
    vector<int>arr[n];
    arr[0] = {1,3};
    arr[1] = {0,2,4};
    arr[2] = {1,3,4};
    arr[3] = {0,2};
    arr[4] = {1,2};
    cout<<"*=hamiltonian cycle , .=hamiltonian path\n";
    PrintHamiltonian(arr,n);
    



return 0;
}