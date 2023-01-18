#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> stk;
    while (!q.empty())
    {
        stk.push(q.front());
        q.pop();
    }
    while (!stk.empty())
    {
        q.push(stk.top());
        stk.pop();
    }
    return q;
}
int main()
{

    return 0;
}