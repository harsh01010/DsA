#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
apply pick and not pick logic 
*/

  int f(vector<int>arr,int i,int prev_i,vector<vector<int>>&dp)
    {
        if(i==arr.size()) return 0;
        else if(dp[i][prev_i+1]!=-1)return dp[i][prev_i+1];
        int ans = f(arr,i+1,prev_i,dp);
        if(prev_i==-1 or arr[i]>arr[prev_i])
            ans = max(ans,1+f(arr,i+1,i,dp));
        return dp[i][prev_i+1] = ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>>dp(n,vector<int>(n+1,-1));
        // return f(nums,0,-1,dp);

    //    vector<vector<int>>table(n+1,vector<int>(n+3,0));
    //    for(int i = n-1;i>=0;i--)
    //    {
    //        for(int j=i-1;j>=-1;j--)
    //        {
    //            int ans = table[i+1][j+1];
    //            if(j==-1 or nums[i]>nums[j])
    //             ans = max(ans,1+table[i+1][i+1]);
        
    //         table[i][j+1] = ans;
    //        }
    //    }
    //    return table[0][0];

    // the solution written below is differnt form above.
    vector<int>arr(n,1);
    int ans=1;
    for(int i=1;i<n;i++)
    {   int mx = 0;
        for(int j = i-1;j>=0;j--)
        {
            if(nums[i]>nums[j]) mx = max(mx,arr[j]);
        }
        arr[i] += mx;

        ans = max(ans,arr[i]);
    }
    return ans;
    }

int main()
{

    



return 0;
}