#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
// minimum absolute sum partition
/*
use same tabulation approach used the target sum partition, check for all the lart row true entries in the table.
*/



int f(vector<int> nums)
{
    int minimum = *min_element(nums.begin(), nums.end());
    bool yes = minimum < 0; // for handling negative numbers
    int sum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (yes)
            nums[i] -= minimum;
        sum = max(sum, max(nums[i], sum + nums[i]));
    }
    // cout<<sum<<"\n";
    vector<vector<int>> dp(nums.size(), vector<int>(sum + 1, 0));

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 and nums[i] == j)
                dp[i][nums[i]] = 1;

            else if (j == 0)
                dp[i][0] = 1;
            else if (i != 0)
            {
                int x = dp[i - 1][j];
                int y = 0;
                if (nums[i] <= j)
                    y = dp[i - 1][j - nums[i]];

                dp[i][j] = x || y;
            }
        }
    }

    int res = INT_MAX;
    for (int i = 0; i <= sum; i++)
    {
        if (dp[nums.size() - 1][i] == 1)
        {
            res = min(res, abs(i - sum + i));
        }
    }

    return res;
}

int main()
{

    return 0;
}