#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// top down

 int f(vector<vector<int>>&arr,int i,int j,vector<vector<int>>&dp)
    {
        if(i<0 or j<0)
            return INT_MAX;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(i==0 and j==0)
            return dp[i][j] = arr[i][j];
        
        int x = f(arr,i-1,j,dp);
        int y = f(arr,i,j-1,dp);

        return dp[i][j] = arr[i][j] + min(x,y);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(grid,n-1,m-1,dp);
    }

    // bottom up
     int minPathSumTabulation(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(i==0 and j==0)
                {dp[i][j] = grid[i][j]; continue;}
                int x = INT_MAX;
                int y= INT_MAX;
                if(i>0) x = dp[i-1][j];
                if(j>0) y = dp[i][j-1];

                dp[i][j] = grid[i][j] + min(x,y);
               
            }
        }
        return dp[n-1][m-1];
    }

int main()
{
    



return 0;
}