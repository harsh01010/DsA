#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m)
{
     vector<int> ans;

     if (n == 1)
     {
          for (int i = 0; i < m; i++)
               ans.push_back(matrix[0][i]);
          return ans;
     }
     if (m == 1)
     {
          for (int i = 0; i < n; i++)
               ans.push_back(matrix[i][0]);
          return ans;
     }

     for (int i = 0; i < m; i++)
     {
          ans.push_back(matrix[0][i]);
     }

     for (int i = 1; i < n; i++)
     {
          ans.push_back(matrix[i][m - 1]);
     }

     for (int i = m - 2; i >= 0; i--)
     {
          ans.push_back(matrix[n - 1][i]);
     }

     for (int i = n - 2; i > 0; i--)
     {
          ans.push_back(matrix[i][0]);
     }
}

int main()
{
#ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
#endif
     int n, m;
     cin >> n >> m;
     vector<vector<int>> arr;
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
  vector<int>trv = boundaryTraversal(arr,n,m);
     for(int i=0;i<trv.size();i++)
        cout<<trv[i]<<" ";
   
     return 0;
}