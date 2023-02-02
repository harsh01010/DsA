#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// kth smallest
int kthSmallest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> p{arr, arr + n};
    for (int i = 0; i < k - 1; i++)
        p.pop();
    return p.top();
}
int main()
{

    return 0;
}