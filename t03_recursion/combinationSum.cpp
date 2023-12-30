#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void getAns(vector<int> arr, int i, int s, vector<int> &temp, vector<vector<int>> &res)
{
    if (i >= arr.size())
    {
        if (s == 0)
        {
            res.push_back(temp);
        }
        return;
    }
    if (arr[i] <= s)
    {
        temp.push_back(arr[i]);
        getAns(arr, i, s - arr[i], temp, res);
        temp.pop_back();
    }
    getAns(arr, i + 1, s, temp, res);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<int> temp;
    vector<vector<int>> res;
    getAns(candidates, 0, target, temp, res);
    return res;
}
int main()
{

    return 0;
}