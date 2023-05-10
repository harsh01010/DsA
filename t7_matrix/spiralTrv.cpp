#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void printSpiral(vector<vector<int>> arr)
{
     int top = 0, bottom = arr.size() - 1;
     int right = arr[0].size() - 1, left = 0;

     while (top <= bottom and left <= right)
     {
          for (int i = left; i <= right; i++)
               cout << arr[top][i] << " ";
          top++;

          for (int i = top; i <= bottom; i++)
               cout << arr[i][right] << " ";
          right--;

          if (top <= bottom)
          {
               for (int i = right; i >= left; i--)
                    cout << arr[bottom][i] << " ";
               bottom--;
          }

          if (left <= right)
          {
               for (int i = bottom; i >= top; i--)
                    cout << arr[i][left] << " ";
               left++;
          }
     }
}
int main()
{
#ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
#endif

     vector<vector<int>> arr;
     int n, m;
     cin >> n >> m;
     for (int i = 0; i < n; i++)
     {
          vector<int> tp;
          for (int j = 0; j < m; j++)
          {
               int x;
               cin >> x;
               tp.push_back(x);
          }
          arr.push_back(tp);
     }

     printSpiral(arr);

     return 0;
}

/*
                              top->0           right->c-1
                                 10  20  30  40
                                  >   >   >   >    top++    arr[top][i] left to right

  arr[i][left]  left++           50| 60  70  |80
  bottom to top

                                 90| 10  20  |30
  bottom-- arr[bottom][i]        <     <    <           right to left  if(top<=bottom)
                                 40  50  60  |70
                              left->0             bottom -> r-1
                                             arr[i][right] right--  top to bottom

*/