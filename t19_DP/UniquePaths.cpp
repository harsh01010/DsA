#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// top down approach


int f(int m,int n,vector<vector<int>>&dp)
{
    if(m<1 or n<1)
     return 0;
     if(dp[m][n] != -1)
        return dp[m][n];
     if(m==1 or n==1)
        return 1;
    
    int u = f(m,n-1,dp);
    int l = f(m-1,n,dp);

    return dp[m][n] = u+l;

}

int getAns(int m,int n)
{
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

    return f(m,n,dp);
}

// bottom up


int main()
{
int m,n;
cin>>m>>n;

int res = getAns(m,n);
cout<<res<<endl;



return 0;
}