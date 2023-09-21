#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int getans(vector<int>arr)
{
    int mini = 1e9 , maxi = -1e9;
    for(auto it:arr)
    {
        mini = min(mini,it);
        maxi = max(maxi,it-mini);
    }
    return maxi;
}

int main()
{

    int n; cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        arr.push_back(x);
    }



return 0;
}