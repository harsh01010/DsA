#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int> nextSamll(vector<int> arr)
{
   stack<int> stk;
   vector<int> ans;

   for (int i = arr.size() - 1; i >= 0; i--)
   {
      while (!stk.empty() and arr[stk.top()] >= arr[i])
         stk.pop();
      int x = stk.empty() ? arr.size() : stk.top();
      stk.push(i);
      ans.push_back(x);
   }
   reverse(ans.begin(), ans.end());
   return ans;
}

int main()
{

   vector<int> sample;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      sample.push_back(x);
   }
   sample = nextSamll(sample);
   for (auto it : sample)
      cout << it << " ";

   return 0;
}