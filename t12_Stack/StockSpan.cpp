#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


 /*
    stock span problem
    span = index of curr element - index of closest greater element

 */

vector<int> StockSpan(vector<int>stock)
{     vector<int>ans;
       stack<pair<int,int>>stk;
        for(auto it:stock)
        {
              int res = 1;
               while(!stk.empty() and stk.top().first <= it)
               {
                       res += stk.top().second;
                       stk.pop();
               }
               stk.push( {it , res} );
               ans.push_back(res);
        }
        return ans;
}
int main()
{
     
      vector<int>stock;
      cout<<"enter total number of days\n";
      int n; cin>>n;
      for(int i=0;i<n;i++)
      {
           int x; cin>>x;
           stock.push_back(x);
      }
   
   vector<int>span = StockSpan(stock);
   for(auto it:span) cout<<it<<" ";
     



return 0;
}