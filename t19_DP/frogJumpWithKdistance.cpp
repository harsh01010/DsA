#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int frogJump_(vector<int>arr,int k,int i)
{
    if(i==0)
        return 0;
    int res = INT_MAX;
    
    for(int j = 1;j<=k;j++)
    {
        if(i-j >= 0){ 
        int rec = frogJump_(arr,k,i-j) + abs(arr[i] - arr[i-j]);
        res = min(rec,res);}
    }
    return res;
}
int frogJump(vector<int>arr,int k)
{
        return frogJump_(arr,k,arr.size()-1);
    
}

// memoization


int memo_(vector<int>arr,vector<int>&dp,int k,int i)
{
    if(i==0)
        return 0;
    if(dp[i] == -1)
    {
        int res = INT_MAX;
        for(int j = 1;j<=k;j++)
        {
            if(i-j >= 0)
            {
                res = min(res,memo_(arr,dp,k,i-j)+abs(arr[i]-arr[i-j]));
            }
        }
        dp[i] = res;
    }
    return dp[i];
}
int memo(vector<int>arr,int k)
{
    vector<int>dp(arr.size(),-1);
    return memo_(arr,dp,k,arr.size()-1);
}
// similarly tabulation and space optimized solutions can be implemented.

int main()
{
    



return 0;
}