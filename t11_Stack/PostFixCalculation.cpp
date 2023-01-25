#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
  ALGORITHM FOR EVALUATION OF POSTFIX EXPRESSION

    1. CREATE A EMPTY STACK ST

    2. TRAVERSE THROUGH EVERY SYMBOL X OF GIVEN POSTFIX

        A. IF X IS OPERAND PUSH IN TO THE STACK

        B. ELE(X IS AN OPERATOR)
          i. OP1 = ST.POP()
          ii. OP2 == ST.POP()
          iii. COMPUTE OP2 x OP1 AND PUSH THE RESULT TO STACK
    3. RETURN STK.TOP()

*/


int postFixCalculate(string s)
{
       stack<int>stk;
       for(int i=0;i<s.length();i++)
       {
            if(s[i] >= '0' and s[i] <= '9')
            {
                  stk.push(s[i] - '0');
            }
        
            else
            {  
                 int o2 = stk.top(); stk.pop();
                 int o1 = stk.top(); stk.pop();
                
             
               switch(s[i])
               {
                   case '+': stk.push(o1+o2); break;
                   case '-': stk.push(o1-o2); break;
                   case '*': stk.push(o1*o2); break;
                   case '/': stk.push(o1/o2); break;
                   case '^': stk.push(pow(o1,o2)); break;
                             
               }  
            }
       }
       return stk.top();
}

int main()
{
    string exp;
      cin>>exp;
      cout<<postFixCalculate(exp)<<"\n";



return 0;
}