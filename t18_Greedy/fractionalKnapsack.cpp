#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
    fractional kanpsack
    given weight and value array , and a target weight.
    we have to find the maximum value we can get by choosing weights from the array equal to target weight.

    greedy algorithm:
    sort the given array in decreasing order of value by weight ratio.
    res = 0 , curr_cap = target weight

    for every i in sorted array:
        if i.weight <= curr_cap : curr_cap -= i.weight ; res += i.value
        else: res += i.value * curr_cap/i.weight ; return res
    return res
*/

static bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first / (double)p1.second > p2.first / (double)p2.second;
}
double fractionalknapsack(vector<pair<int, int>> v, int wt, int n)
{
    sort(v.begin(), v.end(), comp);

    int remain_wt = wt;
    double res = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second <= remain_wt)
        {
            remain_wt -= v[i].second;
            res += v[i].first;
        }
        else
        {

            res += v[i].first * remain_wt / (double)v[i].second;
            remain_wt = wt;
            return res;
        }
    }
    return res;
}

int main()
{

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    int w;
    cin >> w;
    double res = fractionalknapsack(v, w, n);
    cout << res << "\n";

    return 0;
}

/*
3
60 10
100 20
120 30
50
*/