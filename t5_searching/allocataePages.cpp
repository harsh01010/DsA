#include <bits/stdc++.h>
#define ll long long
using namespace std;
int min_arr(vector<int> arr)
{
  int ans = arr[0];
  for (int i = 1; i < arr.size(); i++)
    ans = max(ans, arr[i]);

  return ans;
}
int max_arr(vector<int> arr)
{
  int ans = arr[0];
  for (int i = 1; i < arr.size(); i++)
    ans += arr[i];
  return ans;
}

 // take care of ispossibe function
bool isPossible(vector<int> arr, int k, int sum)
{
  int tempsum = 0, cnt = 1;
  for (int i = 0; i < arr.size(); i++)
  {
      if(arr[i]>sum) return false;
    if (tempsum + arr[i] <= sum)
      tempsum += arr[i];

    else
    {
      cnt++;
      tempsum = arr[i];
      if(cnt>k) return false;
    }
  }
  if(tempsum!=0) cnt++;
  return true;
}
int allocate(vector<int> arr, int k)
{
  int l = min_arr(arr), h = max_arr(arr);
  int ans = -1;

  while (l <= h)
  {
    int sum = (l + h) >> 1;
    if (isPossible(arr, k, sum))
    {
        ans = sum;
      h = sum - 1;
    }
    else
      l = sum + 1;
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
    int e;
    cin >> e;
    arr.push_back(e);
  }
  int k;
  cin >> k;

  int ans = allocate(arr, k);
  cout<<ans<<" ";
  return 0;
}