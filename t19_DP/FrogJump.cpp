#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int frog_jump_(vector<int> arr, int i)
{
    if (i == 0)
        return 0;
    int left = frog_jump_(arr, i - 1) + abs(arr[i] - arr[i - 1]);
    int right = left;
    if (i > 1)
        right = frog_jump_(arr, i - 2) + abs(arr[i] - arr[i - 2]);

    return min(right, left);
}
int frog_jump(vector<int> arr)
{
    return frog_jump_(arr, arr.size() - 1);
}

// memoization

int frogJumpMemoiz_(vector<int> arr, vector<int> &dp, int i)
{
    if (dp[i] == -1)
    {
        if (i == 0)
            return dp[i] = 0;
        int left = frogJumpMemoiz_(arr, dp, i - 1) + abs(arr[i] - arr[i - 1]);
        int right = left;
        if (i > 1)
            right = frogJumpMemoiz_(arr, dp, i - 2) + abs(arr[i] - arr[i - 2]);

        dp[i] = min(right, left);
    }
    return dp[i];
}
int frogJumpMemoiz(vector<int> arr)
{
    vector<int> dp(arr.size(), -1);
    return frogJumpMemoiz_(arr, dp, arr.size() - 1);
}
// Tabulation

int tab(vector<int> arr)
{
    int n = arr.size();
    vector<int> dp(n, -1);
    dp[0] = 0;
    dp[1] = abs(arr[0] - arr[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    }
    return dp[n - 1];
}

// space optimzed
int optimiz(vector<int> arr)
{
    int n = arr.size();
    int curr = abs(arr[0] - arr[1]);
    int prev = 0;

    for (int i = 2; i < n; i++)
    {
        int temp = curr;
        curr = min(curr + abs(arr[i] - arr[i - 1]), prev + abs(arr[i] - arr[i - 2]));
        prev = temp;
    }

    return curr;
}
int main()
{

    vector<int> arr = {10, 20, 10, 30, 40, 60, 50};
    // int res = frogJumpMemoiz(arr);
    int res = optimiz(arr);
    cout << res << "\n";

    return 0;
}