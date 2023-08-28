#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int getAns(vector<int> arr, int i, int s, vector<vector<int>> &dp)
{
    if (s == 0)
        return dp[i][s] = 1;
    if (i == 0)
    {
        if (s == arr[i])
            return dp[i][s] = 1;
        return dp[i][s] = 0;
    }

    if (dp[i][s] != -1)
        return dp[i][s] % 1000000007;
    int x = getAns(arr, i - 1, s, dp) % 1000000007;
    int y = 0;
    if (arr[i] <= s)
        y = getAns(arr, i - 1, s - arr[i], dp) % 1000000007;

    x += y;

    return dp[i][s] = x % 1000000007;
}

int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = k;
    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
    return getAns(arr, n - 1, sum, dp);
}

int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = k;
    vector<int> prev(sum + 1, 0), curr(sum + 1, 0);
    prev[0] = curr[0] = 1;
    if (arr[0] <= sum)
        prev[arr[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            int x = prev[j] % 1000000007;
            int y = 0;
            if (arr[i] <= j)
                y = prev[j - arr[i]] % 1000000007;
            curr[j] = (x + y) % 1000000007;
        }
        prev = curr;
    }
    return prev[sum];
}

int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = k;
    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
    vector<vector<int>> table(n, vector<int>(sum + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0 and j == arr[i])
                table[i][j] = 1;
            else if (j == 0)
                table[i][j] = 1;
            else if (i != 0)
            {
                int x = table[i - 1][j] % 1000000007;
                int y = 0;
                if (arr[i] <= j)
                    y = table[i - 1][j - arr[i]] % 1000000007;

                table[i][j] = (x + y) % 1000000007;
            }
        }
    }
    return table[n - 1][sum];
}
int main()
{

    return 0;
}