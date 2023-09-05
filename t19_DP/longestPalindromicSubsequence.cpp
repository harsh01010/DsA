#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
Longest Palindromic Subsequence:- it is nothing but the lcs of given string and it's reversed string.
*/

// using tabulation
int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(s.begin(),s.end());
        int n = s.length();
        vector<vector<int>>table(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(t[i-1] == s[j-1])
                {
                    table[i][j] = 1 + table[i-1][j-1];
                }
                else
                {
                    table[i][j] = max(table[i-1][j],table[i][j-1]);
                }
            }
        }
        return table[n][n];
    }

//memoization
int lcs(string s,string t,int i,int j,vector<vector<int>>&dp)
    {
        if(i==0 || j==0) return 0;
        if(s[i-1] == t[j-1]) return  dp[i][j] = 1 + lcs(s,t,i-1,j-1,dp);
        if(dp[i][j] != -1)return dp[i][j];
        else return dp[i][j] =  max(lcs(s,t,i-1,j,dp),lcs(s,t,i,j-1,dp));
        
    }
int longestPalindromeSubsequence(string A)
{
    // Write your code here.
    string target = A;
        reverse(A.begin(),A.end());
        vector<vector<int>>dp(A.length()+1,vector<int>(A.length()+1,-1));
        return lcs(target , A,A.length(),A.length(),dp);
}
int main()
{

    



return 0;
}