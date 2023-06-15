#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// bottom up

 int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j] == 1) continue;
                if(i==0 and j==0)
                    {dp[i][j] = 1; continue;}

                int x =0  , y = 0;
                if(i>0)
                    x = dp[i-1][j];
                if(j>0)
                    y = dp[i][j-1];

                dp[i][j] = x+y;               

            }
        }

        return dp[n-1][m-1];
    }



// top down
int f(vector<vector<int>>&arr,int i,int j,vector<vector<int>>&dp)
    {
        if(i<0 or j<0)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(arr[i][j] == 1)
            return dp[i][j] =0;
        if(i==0 and j==0)
            return dp[i][j] = 1;
        
        int x = f(arr,i-1,j,dp);
        int y = f(arr,i,j-1,dp);

        return dp[i][j] = x+y;
    }
    int uniquePathsWithObstacles2(vector<vector<int>>& arr) {
    
        int i = arr.size()-1;
        int j = arr[0].size()-1;
        vector<vector<int>>dp(arr.size(),vector<int>(arr[0].size(),-1));

        if(arr[0][0] == 1 or arr[i][j] == 1)
            return 0;

        return f(arr,i,j,dp);
    }
int main()
{

return 0;
}                       