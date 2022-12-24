#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool isopd(char ch)
{
     return (ch>='a' and ch<='z') || (ch>='A' and ch<='Z') || (ch>='0' and ch<='9');
}
string convert(string s)
{
      stack<string>stk;
      for(int i=s.length()-1;i>=0;i--)
      {
            if(isopd(s[i]))
            {
                  string temp(1,s[i]);
                  stk.push(temp);
            }
            else
            {
                  string x = stk.top(); stk.pop();
                  string y = stk.top(); stk.pop();
                  stk.push('('+x+s[i]+y+')');
            }
      }
      return stk.top();
}

int main()
{
    
     string s; cin>>s;
  string ans  = convert(s);
  cout<<ans<<"\n";


return 0;
}