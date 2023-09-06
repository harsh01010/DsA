#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
minimum number of insertion and deletion performed on a string to make it equal to another string or minimum number of deletion in both the strings to make them equal

-> idea -> find lcs of them and return abs(n-k+m-k) , n,m => lengths of strings , k = lcs length.
*/

int f(string s1 , string s2)
{
     int n = s1.length() , m = s2.length();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1] )
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    return abs(n-dp[n][m]+m-dp[n][m]);
}

int main()
{

    



return 0;
}