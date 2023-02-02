#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// kth largest
int KthLargest(int arr[], int n, int k)
{
    priority_queue<int> p{arr, arr + n};
    int res = p.top();
    for (int i = 0; i < k; i++)
    {
        res = p.top();
        p.pop();
    }
    return res;
}
int main()
{

    return 0;
}