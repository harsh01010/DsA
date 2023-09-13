#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define MOD 1000000007
/*
s1 , s2 -> return total number of ways such that s2 is subsequenc of s1.
*/
// memoization:
int f(string s, string t, int i, int j, vector<vector<int>> &dp)
{

    if (j == 00)
        return 1;
    if (i == 00)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int x = f(s, t, i - 1, j, dp);
    int y = 0;
    if (s[i - 1] == t[j - 1])
        y = f(s, t, i - 1, j - 1, dp);

    return dp[i][j] = x + y;
}
int ff(string s, string t)
{
    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, -1));
    return f(s, t, s.size(), t.size(), dp);
}

// tabulation and space optimization:
int numDistinct(string S, string T)
{
    int n = S.size();
    int m = T.size();

    vector<vector<int>> table(n + 1, vector<int>(m + 1, 0));
    vector<int> p_row(m + 1, 0);
    vector<int> row(m + 1, 0);
    row[0] = 1;
    p_row[0] = 1;
    //   for(int i=0;i<=n;i++)
    //     table[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        { // int x = row[j-1] , y = row[j];
            if (S[i - 1] == T[j - 1])
                row[j] = (p_row[j - 1] % MOD + p_row[j] % MOD) % MOD;
            // table[i][j] = (table[i-1][j-1]% MOD + table[i-1][j]%MOD)%MOD;

            else
                row[j] = p_row[j];
            // table[i][j] = table[i-1][j]%MOD;
        }

        p_row = row;
    }
    // return table[n][m];
    return p_row[m];
}

int main()
{

    return 0;
}