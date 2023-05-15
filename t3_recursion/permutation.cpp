#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void getAns(vector<int> arr, int i, vector<vector<int>> &res)
{
    if (i >= arr.size())
    {
        res.push_back(arr);
        return;
    }
    for (int j = i; j < arr.size(); j++)
    {
        swap(arr[i], arr[j]);
        getAns(arr, i + 1, res);
        swap(arr[i], arr[j]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> res;
    int i = 0;
    getAns(nums, i, res);
    return res;
}

int main()
{

    return 0;
}