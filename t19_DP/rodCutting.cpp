#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int rec(vector<int>arr,int i,int k,vector<vector<int>>&dp)
{
	if(i==0)
	{
			return dp[i][k] =  k*arr[0];
	}
	if(dp[i][k] != -1) return dp[i][k];
	int ni = 0 + rec(arr,i-1,k,dp);
	int ii = INT_MIN;
	if(i+1 <= k)
		ii = arr[i] + rec(arr,i,k-i-1,dp);

	return dp[i][k]=max(ii,ni);
}

int cutRod(vector<int> &price, int n)
{
	//vector<vector<int>>dpp(n,vector<int>(n+1,-1));

	//int ans = rec(price,price.size()-1,n,dpp);
	//return  ans == -1e9 ? -1:ans;
	vector<vector<int>>dp(n,vector<int>(n+1,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
			{
			    dp[i][j] = j*price[0];
			}
			else if(j!=0)
			{
				int ni = dp[i-1][j];
				int ii = -1e9;
				if(i+1 <= j)
					ii = price[i] + dp[i][j-i-1];
				dp[i][j] = max(ni,ii);
			}

		}

	}
	return dp[n-1][n];
	
}

int main()
{

    



return 0;
}