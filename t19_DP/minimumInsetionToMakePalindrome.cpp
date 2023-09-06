#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
minimum insertions to make the string palindrome :- string length - longest palindromic subsequence
*/

int f( string str )
{
    string s = str;
    int n = str.length();
    reverse(str.begin(),str.end());
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i-1] == str[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
                
            }
            else 
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    
    return n - dp[n][n];

}


int main()
{

    



return 0;
}