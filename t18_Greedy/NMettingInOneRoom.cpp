#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

static bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second != p2.second ? p1.second < p2.second : p1.first < p2.first;
}
int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int, int>> shedule;
    for (int i = 0; i < n; i++)
    {
        shedule.push_back({start[i], end[i]});
    }
    sort(shedule.begin(), shedule.end(), comp);

    int res = 1;
    int p_end = shedule[0].second;
    for (int i = 1; i < n; i++)
    {
        int c_start = shedule[i].first;
        if (c_start > p_end)
        {
            res++;
            p_end = shedule[i].second;
        }
    }
    return res;
}
int main()
{

    return 0;
}