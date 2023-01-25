#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool isopd(char ch)
{
      return (ch >= '0' and ch <= '9');

}

int prefixEval(string s)
{
      stack<int>stk;
      for(int i=s.length()-1;i>=0;i--)
      {
        if(isopd(s[i]))
        {
              stk.push(s[i]-'0');
        }
        else
        {
             int y = stk.top(); stk.pop();
             int x = stk.top(); stk.pop();

             switch(s[i])
             {
                case '+':stk.push(x+y);break;
                case '-':stk.push(x-y);break;
                case '*':stk.push(x*y);break;
                case '/':stk.push(x/y);break;
             }
        } 
      }
      return stk.top();
}

int main()
{
    string prefix; cin>>prefix;
    int val = prefixEval(prefix);
    cout<<val<<"\n";



return 0;
}