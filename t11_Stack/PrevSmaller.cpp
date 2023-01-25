#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int> prvSmall(vector<int>arr)
{   
    // we have to return a vector containg the indexes of colsest previuos element(indexwise) for each element in the input vector
     vector<int>ans;
     stack<int>stk;
      for(int i=0;i<arr.size();i++)
      {
       while(!stk.empty() and arr[stk.top()] >= arr[i])
       {
          stk.pop();
       }
       int pus = stk.empty()?-1:stk.top();
       stk.push(i);
       ans.push_back(pus);
      }
      return ans;
}

int main()
{
   #ifndef ONLINE_JUDGE
   freopen("i_p.txt", "r", stdin);
   freopen("o_p.txt", "w", stdout);
   #endif

   



return 0;
}