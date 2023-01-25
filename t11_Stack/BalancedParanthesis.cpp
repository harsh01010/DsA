#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
  Balanced paranthesis
  put opening brackets in the stack 
  when we encounter a closing bracket , 
  then we first we match it with the top , if it is associated with the top then it must be poped
  else we insert at top
  at last if teh stack is empty then string is balanced paranthesis

*/
bool balanced(string s)
{    
    stack<char>stk;
    unordered_map<char , char>ump;
    ump[']'] = '[';
    ump['}'] = '{';
    ump[')'] = '(';
    for(int i=0;i<s.length();i++)
    {
         if(s[i] == '{' or s[i] == '[' or s[i] == '(') stk.push(s[i]);
         else
         {
              if(!stk.empty() and stk.top() == ump[s[i]]) stk.pop();
                else stk.push(s[i]); 
         }
    }

 return stk.empty();

}

int main()
{
    int t;
     cout<<"enter total number of strings to be checked\n";
     cin>>t;
     while(t--)
     {
          string s;
            cin>>s;
        if(balanced(s)) cout<<"it is balanced\n";
        else cout<<"it is not balanced\n";
     // print(balanced(s));
     }
return 0;
}