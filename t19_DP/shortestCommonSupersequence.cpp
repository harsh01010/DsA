#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
given two strings , we have to find a strings that contains both the given strings as subsequences.

idea:-
    use lcs tabulation ,
        construct lcs table and use similar method  as used in finding the lcs
        in finding lcs question we have only include characters with condition(s[i-1] == t[j-1])
        here we will include other characters also.
*/

string shortestSupersequence(string a, string b)
{
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    string ans;

    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            ans.push_back(a[i - 1]);
            i--, j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            ans.push_back(a[i - 1]);

            i--;
        }
        else
        {
            ans.push_back(b[j - 1]);

            j--;
        }
    }
    while (i > 0)
        ans.push_back(a[i - 1]), i--;
    while (j > 0)
        ans.push_back(b[j - 1]), j--;
    reverse(ans.begin(), ans.end());
    // cout<<ans<<"\n";
    return ans;
}

/*
length of scs :- n + m - length of lcs
*/
int lcs(string a, string b, vector<vector<int>> &dp, int i, int j)
{
    if (i == 0 || j == 0)
    {
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];
    if (a[i - 1] == b[j - 1])
        return dp[i][j] = 1 + lcs(a, b, dp, i - 1, j - 1);
    return dp[i][j] = max(lcs(a, b, dp, i - 1, j), lcs(a, b, dp, i, j - 1));
}
int shortestCommonSupersequenceLength(string a, string b, int m, int n)
{

    n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    return m + n - lcs(a, b, dp, n, m);
}
int main()
{

    return 0;
}