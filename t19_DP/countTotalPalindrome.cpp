#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/***Brute Force + Memoizatiion*******/

bool func(string s, int i, int j, vector<vector<int>> &dp)
{
    if (i >= j)
        return true;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s[i] != s[j])
        return false;
    else
        return dp[i][j] = func(s, i + 1, j - 1, dp);
}
int countSubstrings(string s)
{
    int cnt = 0;
    vector<vector<int>> dp(s.length(), vector<int>(s.length(), -1));
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
            if (func(s, i, j, dp))
                cnt++;
    }
    return cnt;
}

/************/

int main()
{

    return 0;
}