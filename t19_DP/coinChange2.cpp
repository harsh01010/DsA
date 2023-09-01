#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
coin change 2: return total number of possibilites to reach up to given amount using given denominations of coins with infinite supply.
*/
// using memoization:
long rec(int arr[], int i, int val, vector<vector<long>> &dp)
{
    if (i == 0)
    {
        if (val % arr[0] == 0)
            return dp[i][val] = 1;
        return dp[i][val] = 0;
    }
    if (dp[i][val] != -1)
        return dp[i][val];
    long ni = rec(arr, i - 1, val, dp);
    long ii = 0;
    if (arr[i] <= val)
        ii = rec(arr, i, val - arr[i], dp);

    return dp[i][val] = ni + ii;
}
long countWaysToMakeChange(int arr[], int n, int value)
{
    vector<vector<long>> dp(n, vector<long>(value + 1, -1));

    return rec(arr, n - 1, value, dp);
}

// using tabulation:

int change(int amount, vector<int> &coins)
{
    vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, 0));
    for (int i = 0; i < coins.size(); i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            if (i == 0)
            {
                if (j % coins[0] == 0)
                    dp[i][j]++;
            }
            else
            {
                int ni = dp[i - 1][j];
                int ii = 0;
                if (coins[i] <= j)
                    ii = dp[i][j - coins[i]];
                dp[i][j] = ni + ii;
            }
        }
    }
    return dp[coins.size() - 1][amount];
}

int main()
{

    return 0;
}