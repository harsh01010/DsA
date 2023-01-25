#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int> nextSmall(long long arr[] , int n)
    {
          vector<int>ans;
          stack<int>stk;
          for(int i=n-1;i>=0;i--)
          {
                while(!stk.empty() and arr[stk.top()] >= arr[i])
                 stk.pop();
                 
                 int x = !stk.empty()?stk.top():n;
                 stk.push(i);
                 ans.push_back(x);
          }
          reverse(ans.begin() , ans.end());
          return ans;
    }
    
    vector<int> prevSmall(long long arr[] , int n)
    {
          vector<int>ans;
          stack<int>stk;
          for(int i=0;i<n;i++)
          {
                while(!stk.empty() and arr[stk.top()] >= arr[i])
                {
                     stk.pop();
                }
                int x = stk.empty() ? -1 : stk.top();
                stk.push(i);
                ans.push_back(x);
          }
          return ans;
    }
    long long getMaxArea(long long arr[], int n)
    {
        vector<int>ns = nextSmall(arr ,n);
        vector<int>ps = prevSmall(arr , n);
        long long ans = 0;
            for(int i=0;i<n;i++)
            { 
                 long long res = arr[i]*(ns[i]-ps[i]-1);
                 ans = max(res , ans);
            }
            return ans;
    }

int main()
{
   



return 0;
}