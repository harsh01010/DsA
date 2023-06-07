#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// house robber 2
/*
we don't need new logic for this question , it can be solved using the same logic of the house robber 1

    find the maximum non adjacent from 0 to size -1 and 1 to size  and return the maximum of them(since we cannot take first and last simultaneously)
*/

int houseRobOne(vector<int> nums, int l, int h)
{
    int prev = nums[l];
    int nprev = 0;
    int ans = max(prev, nprev);
    for (int i = l + 1; i <= h; i++)
    {
        int ele = nums[i];
        int consider = ele + nprev;
        int notConsider = prev;

        ans = max(consider, notConsider);
        nprev = prev;
        prev = ans;
    }

    return ans;
}

int rob(vector<int> nums)
{
    if (nums.size() == 1)
        return nums[0];
    int ans1 = houseRobOne(nums, 0, nums.size() - 2);
    int ans2 = houseRobOne(nums, 1, nums.size() - 1);

    return max(ans1, ans2);
}
int main()
{

    vector<int>arr;
    int n; std::cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; std::cin>>x;
        arr.push_back(x);
    }

    return 0;
}