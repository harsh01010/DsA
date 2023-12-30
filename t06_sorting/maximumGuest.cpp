#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int arr[n], drr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++)
    cin >> drr[i];
  sort(arr, arr + n);
  sort(drr, drr + n);

  int curr = 0, res = 2, i = 0, j = 0;
  while (i < n and j < n) {
    if (arr[i] <= drr[j]) {
      curr++, i++;
    } else if (arr[i] > drr[j]) {
      j++;
      res = max(res, curr);
      curr = 0;
    }
  }

  cout << res << "\n";

  return 0;
}