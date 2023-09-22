#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
stock buy sell 4 , we can make atmost k transactions.
similar approach used in stock buy sell 3 problem.
*/

int f(vector<int> arr, int i, int b, int k, vector<vector<vector<int>>> &dp)
{
    if (k == 0 or i == arr.size())
        return 0;
    if (dp[i][b][k] != -1)
        return dp[i][b][k];
    if (b)
        return dp[i][b][k] = max(arr[i] + f(arr, i + 1, !b, k - 1, dp), f(arr, i + 1, b, k, dp));
    else
        return dp[i][b][k] = max(-arr[i] + f(arr, i + 1, !b, k, dp), f(arr, i + 1, b, k, dp));
}
int maxProfit(int k, vector<int> &prices)
{
    // vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
    // return f(prices,0,0,k,dp);

    vector<vector<vector<int>>> table(prices.size() + 1, vector<vector<int>>(2, vector<int>(k + 1, 0)));
    int n = prices.size();

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int l = 1; l <= k; l++)
            {
                if (!j)
                    table[i][j][l] = max(prices[i] + table[i + 1][!j][l - 1], table[i + 1][j][l]);
                else
                {
                    table[i][j][l] = max(-prices[i] + table[i + 1][!j][l], table[i + 1][j][l]);
                }
            }
        }
    }
    return table[0][1][k];
}

int main()
{

    return 0;
}