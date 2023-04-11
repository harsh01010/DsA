/*
  infix to postfix:

    1. simple method:

     use parenthesis
     (a+b)*(c+d) =>  ((a+b)*(c+d)) => ((ab+)*(cd+)) => ab+cd+*  <- postfix

    2. using stack:

    Algorithm:

     1. CREATE A EMPTY STACK , ST

     2. DO FOLLOWING FOR EVERY CHARACTER X FORM LEFT TO RIGHT.

     3. IF X IS:
        A. OPERAND: OUTPUT  IT
        B. LEFT PARANTHESIS: PUSH TO ST
        C. RIGHT PARANTHESIS: POP FORM ST UNTILL LEFT PARENTHESIS IS FOUND.
         OUTPUT THE POPPED OPERATORS.
        D. OPERATOR:
           IF ST IS EMPTY , PUSH X TO ST
             ELSE COMPARE WITH ST TOP.
            i.X HAS HIGHER PRECEDENCE(THAT ST TOP) , PUSH TO ST.
            ii. X HAS LOWER PRECEDENCE , POP ST TOP AND OUTPUT UNTILL A HIGHER PRECEDENCE
              OPERATOR IS FOUND. THEN PUSH S TO ST.
            iii. EQUAL PRECEDENCE , USE ASSOCIATIVITY

     4. POP AND OUTPUT EVERYTHING FROM  ST.

*/

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int val(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return -1;
}

string InToPostFix(string s)
{

    stack<char> stk;
    string postfix;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // if it is a operand , push it in postfix expression
        if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z') or (ch >= '0' and ch <= '9'))
        {
            postfix += ch;
        }

        // if it is '(' , push it to stack
        else if (ch == '(')
        {
            stk.push(ch);
        }
        // if it is ')' , pop untill we see '('
        else if (ch == ')')
        {
            while (!stk.empty() and stk.top() != '(')
            {
                postfix += stk.top();
                stk.pop();
            }
            stk.pop(); // poping ')'
        }
        // if it is operator
        else
        {
            while (!stk.empty() and val(ch) <= val(stk.top()))
            {
                postfix.push_back(stk.top());
                stk.pop();
            }
            stk.push(ch);
        }
    }
    // now poping form the stack and pushing top into the postfix expression
    while (!stk.empty())
    {
        postfix.push_back(stk.top());
        stk.pop();
    }

    return postfix;
}

int main()
{
    string s;
    cout << "enter a string containg a infix expression\n";
    cin >> s;

    string postfix = InToPostFix(s);
    cout << "the postfix expression associated to given infix expresssion is = " << postfix << "\n";

    return 0;
}
