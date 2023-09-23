#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


 int maxProfit(vector<int>& prices, int fee) {
        int n= prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));

        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<=1;j++)
            {
                if(!j)
                dp[i][j] = max(-fee+prices[i]+dp[i+1][!j],dp[i+1][j]);
                else dp[i][j] = max(-prices[i]+dp[i+1][!j],dp[i+1][j]);
            }
        }
        return dp[0][1];
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