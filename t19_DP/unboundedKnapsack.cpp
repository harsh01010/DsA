#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int rec(int val[], int wt[], int i, int w, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        return dp[i][w] = ((int)w / wt[0]) * val[0];
    }
    if (dp[i][w] != -1)
        return dp[i][w];
    int ni = rec(val, wt, i - 1, w, dp);
    int ii = 0;
    if (wt[i] <= w)
        ii = val[i] + rec(val, wt, i, w - wt[i], dp);

    return dp[i][w] = max(ni, ii);
}
int knapSack(int N, int W, int val[], int wt[])
{
    vector<vector<int>> dp(N, vector<int>(W + 1, -1));
    return rec(val, wt, N - 1, W, dp);
}

int main()
{

    return 0;
}