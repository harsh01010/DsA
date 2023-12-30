#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{

    function<int(vector<int>, int, int, int)> rec = [&](vector<int> arr, int lo, int hi, int x) -> int
    {
        if (lo >= hi)
            return -1;
        int md = (lo + hi) / 2;
        if (arr[md] == x)
            return md;
        if (arr[md] > x)
            return rec(arr, lo, md - 1, x);
        else
            return rec(arr, md + 1, hi, x);
    };

    function<int(vector<int>, int, int, int)> itr = [&](vector<int> arr, int lo, int hi, int x) -> int
    {
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] == x)
                return mid;
            if (arr[mid] > x)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return -1;
    };
    vector<int> arr = {2, 3, 4, 11, 12, 34, 56, 99};
    cout << itr(arr, 0, arr.size() - 1, 34);

    return 0;
}