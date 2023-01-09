#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool func(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int minLaptops(int N, int start[], int end[])
{
    // Code here
    vector<pair<int, int>> vec;
    for (int i = 0; i < N; i++)
    {
        vec.push_back({start[i], end[i]});
    }

    sort(vec.begin(), vec.end() , func);

    int res = 1;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1].first > vec[i].second)
            res++;
    }
    return res;
}
int main()
{

    return 0;
}