#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;



// recursive
int f(int prev,int i,vector<vector<int>>arr)
{
    if(i==arr.size()) return 0;

    if(i==arr.size()-1)
    {
        int res = 0;
        for(int j=0;j<arr[0].size();j++)
        {
            if(j==prev) continue;
            res = max(res,arr[i][j]);
        }

        return res;
    }

    int currMax = 0;
    for(int j=0;j<arr[0].size();j++)
    {
        if(j==prev) continue;
        int curr = arr[i][j] + f(j,i+1,arr);
        currMax = max(currMax,curr);
    }
    return currMax;


} 

int f1(vector<vector<int>>arr)
{
    int res = 0;
    for(int i=0;i<arr[0].size();i++)
    {
        
        int currAns = arr[0][i] + f(i,1,arr);
        res = max(res,currAns);
    }
    return res;
}


// memoization

int f3(int prev,int i,vector<vector<int>>&arr,vector<vector<int>>&dp)
{
    if(dp[i][prev] != -1) return dp[i][prev];

    if(i==0)
    {
        int m = 0;
        for(int j=0;j<3;j++)
        {
            if(j==prev) continue;
            m = max(m,arr[i][j]);
        }
        return dp[i][prev] = m;
    }

    int curr = 0;
    for(int j=0;j<3;j++)
    {
        if(j==prev) continue;
        curr = max(curr,arr[i][j]+f3(j,i-1,arr,dp));

    }
    return dp[i][prev] = curr;
} 

int f2(vector<vector<int>>arr)
{
    vector<vector<int>>dp(arr.size(),vector<int>(4,-1));
    return f3(3,arr.size()-1,arr,dp);    
}

//tabulation

int table(vector<vector<int>>arr,int n)
{
    vector<vector<int>>dp(n,vector<int>(4,-1));
    dp[0][0] = max(arr[0][1],arr[0][2]);
    dp[0][1] = max(arr[0][0],arr[0][2]);
    dp[0][2] = max(arr[0][1],arr[0][0]);
    dp[0][3] = max(arr[0][0],max(arr[0][1],arr[0][2]));
    for(int i=1;i<n;i++)
    {
        for(int l=0;l<4;l++)
        {
            dp[i][l] = 0;
            for(int t = 0;t<=2;t++)
            {
                if(t!=l)
                {
                    int x = arr[i][t] + dp[i-1][t];
                    dp[i][l] = max(dp[i][l],x);
                }
            }
        }

        
    }
    return dp[n-1][3];
}

// space optimization


int main()
{
    
    vector<vector<int>>arr{{10,40,70},
                            {20,50,80},
                            {30,60,90}};

    int res = table(arr,3);
    cout<<res<<"\n";




return 0;
}