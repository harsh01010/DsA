#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
coin change 1 -> return minimum number of coins that make up to given amout. , each coin of different denomination has infinite supply.
use include and not include logic
in case of infinite supply, don't go to next state in case of inlude. include and check other possibilities
*/

// memoization

int f(vector<int> num, int x, int i, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        if (x % num[0] == 0)
            return dp[i][x] = x / num[0];
        else
            return dp[i][x] = 1e9;
    }
    if (dp[i][x] != -1)
        return dp[i][x];
    int ni = f(num, x, i - 1, dp);
    int ii = INT_MAX;
    if (num[i] <= x)
        ii = 1 + f(num, x - num[i], i, dp);
    return dp[i][x] = min(ni, ii);
}
int minimumElements(vector<int> &num, int x)
{

    vector<vector<int>> dp(num.size(), vector<int>(x + 1, -1));
    int ans = f(num, x, num.size() - 1, dp);
}

int main()
{

    // TABULATION
    vector<int> num;
    int x;
    int n;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        num.push_back(q);
    }
    vector<vector<int>> table(num.size(), vector<int>(x + 1, 1e9));
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i == 0)
            {
                if (j % num[i] == 0)
                {
                    table[i][j] = j / num[i];
                }
            }
            else if (j == 0)
            {
                table[i][j] = 0;
            }
            else
            {
                int ni = table[i - 1][j];
                int ii = INT_MAX;
                if (num[i] <= j)
                    ii = 1 + table[i][j - num[i]];

                table[i][j] = min(ni, ii);
            }
        }
    }
    int ans = table[num.size() - 1][x] == 1e9 ? -1 : table[num.size() - 1][x];

    // space optimized
    vector<int> prev(x + 1, 1e9), curr(x + 1, 1e9);
    prev[0] = curr[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        if (i % num[0] == 0)
            prev[i] = i / num[0];
    }

    for (int i = 1; i < num.size(); i++)
    {
        for (int j = 1; j <= x; j++)
        {
            int ni = prev[j];
            int ii = INT_MAX;
            if (num[i] <= j)
                ii = 1 + curr[j - num[i]];

            curr[j] = min(ni, ii);
        }
        prev = curr;
    }
    ans = prev[x] == 1e9 ? -1 : prev[x];

    return 0;
}