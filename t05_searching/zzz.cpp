// allocate minimum number of pages
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int minFind(vector<int> arr)
{
  int res = arr[0];
  for (auto it : arr)
    res = max(res, it);
  return res;
}

int maxFind(vector<int> arr)
{
  int res = 0;
  for (auto it : arr)
    res += it;
  return res;
}

bool isValid(vector<int> arr, int k, int sum)
{
  int cnt = 0;
  int tempsum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (tempsum + arr[i] <= sum)
      tempsum += arr[i];
    else
    {
      cnt++;
      tempsum = arr[i];
    }
  }
  if (tempsum != 0)
    cnt++;
  return cnt == k;
}

int allocate(vector<int> arr, int k)
{
  int l = minFind(arr), h = maxFind(arr), ans = 0;
  while (l <= h)
  {
    int mid = (l + h) / 2;
    if (isValid(arr, k, mid))
    {
      ans = mid;
      h = mid - 1;
    }
    else
      l = mid + 1;
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    arr.push_back(ele);
  }
  int k;
  cin >> k;

  int ans = allocate(arr, k);
  cout << ans << " \n";

  return 0;
}