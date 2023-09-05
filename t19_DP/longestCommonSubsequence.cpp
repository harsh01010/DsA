#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
subsequence:- order same , may or may not be contiguous

pick or not pick

if match -> 1 + i-1, j-1
if not match -> max(i-1,j ,, i,j-1)
*/
// recursion + memoization
// index has been shifted 
int f(string s,string ss,int i,int j,vector<vector<int>>&dp)
{
	if(i==0 || j==0) return 0; // we will pass n , m (not n-1 , m-1 , in that case if(i<0 || j<0) needed to be used)
	if(dp[i][j] != -1) return dp[i][j];
	if(s[i-1] == ss[j-1]) return dp[i][j]=1 + f(s,ss,i-1,j-1,dp);
	return dp[i][j]= 0 + max(f(s,ss,i-1,j,dp),f(s,ss,i,j-1,dp));
}

// tabulation and space optimized
int lcs(string s, string t)
{
    int n = s.length() , m = t.length();

    vector<vector<int>>tab(s.size()+1,vector<int>(t.size()+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1] == t[j-1])
            {
                tab[i][j] = 1 + tab[i-1][j-1];
            }
            else
            {
                tab[i][j] = 0 + max(tab[i-1][j] , tab[i][j-1]);
            }
        }
        
    }
    // return tab[n][m];
    vector<int>prev(n+1,0),curr(m+1,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1]==t[j-1]) curr[j] = 1 + prev[j-1];
            else{curr[j]=max(prev[j],curr[j-1]);}
        }
        prev=curr;
    }
    return prev[m];
	
}

int main()
{





return 0;
}