#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
   INFIX TO PREFIX

    USE SAME APPROACH AS INFIX TO POSTFIX.

    TRAVERSE THE STRING FROM  RIGHT TO LEFT , AND SINCE WE ARE TRAVERSING FROM RIGTH TO LEFT SO WE'LL ECOUNTER CLOSING PARANTHESIS FIRST , SO HANDLE THIS AS WELL

    NOW RETURN THE  REVERSE OF  THE  GENERATED  ANSWER

*/

bool isopd(char ch)
{
      return (ch>='a' and ch<='z')||(ch>='A' and ch<='Z')||(ch>='0' and ch<='9');
}
int val(char ch)
{
       if(ch == '^') return 3;
       else if(ch == '+' or ch == '-') return 1;
       else if(ch == '*' or ch == '/') return 2;
       else return -1;
}

string convert(string s)
{
      string ans;
      stack<char>stk;
      for(int i = s.length()-1;i>=0;i--)
      {
          if(isopd(s[i])) ans.push_back(s[i]);
          else if(s[i] == ')') stk.push(s[i]);
          else if(s[i] == '(')
          {
            while(stk.top() != ')')
             {
                 ans.push_back(stk.top());
                 stk.pop();
             }
             stk.pop();
          }
          else{
                while(!stk.empty() and val(s[i]) <= val(stk.top()))
                {
                               ans+=stk.top();
                               stk.pop();
                }
                stk.push(s[i]);
          }
      }
      while(!stk.empty())
      {
           ans+=stk.top();
           stk.pop();
      }
      reverse(ans.begin() , ans.end());
      return ans;
}
int main()
{
    

 string infix; cin>>infix;
 string prefix = convert(infix);
 cout<<prefix<<"\n";


return 0;
}