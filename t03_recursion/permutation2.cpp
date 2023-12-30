#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void fun(vector<int> nums, int i, vector<vector<int>> &res)
{
    if (i == nums.size())
    {
        res.push_back(nums);
        return;
    }
    unordered_set<int> st;
    for (int j = i; j < nums.size(); j++)
    {
        if (st.find(nums[j]) != st.end())
            continue;
        swap(nums[i], nums[j]);
        fun(nums, i + 1, res);
        swap(nums[i], nums[j]);
        st.insert(nums[j]);
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<vector<int>> res;
    fun(nums, 0, res);
    sort(res.begin(), res.end());
    return res;
}

int main()
{

    return 0;
}