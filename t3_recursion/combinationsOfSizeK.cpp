#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;



void f(vector<int>&temp,int i, int n,int k)
{
    if(temp.size() == k)
    {
        for(auto it:temp)
            cout<<it<<" ";cout<<"\n";
        return;
    }
    else if(i>n)
        return;
    temp.push_back(i);
    f(temp,i+1,n,k);
    temp.pop_back();
    f(temp,i+1,n,k);
}

int main()
{
    int n; cin>>n;
    int k; cin>>k;
    vector<int>temp;
    int i = 1;
    f(temp,i,n,k);
return 0;
}