#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
postfix to infix

 https://www.youtube.com/watch?v=0itJnkeq6XY

*/

bool isopd(char ch)
{
     return (ch>='a' and ch <= 'z') || (ch>= 'A' and ch <= 'Z') || ( ch>='0' and ch<= '9');
}

string postfixToInfix(string s)
{
        stack<string>stk;

          for(int i =0 ;i<s.length();i++)
          {
                if(isopd(s[i]))
                {
                     string temp(1,s[i]);
                      stk.push(temp);
                }
                else
                {
                      string x = stk.top(); stk.pop();
                      string y  = stk.top(); stk.pop();
                      stk.push('('+y+s[i]+x+')');
                }
          }
          return stk.top();
}

int main()
{
   
   string postfix; cin>>postfix;

   string infix = postfixToInfix(postfix);
   cout<<infix<<"\n";
    



return 0;
}