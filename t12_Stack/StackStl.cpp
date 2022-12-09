/*
   STACK

   Last in first out

  application of stack:

    function calls
    checking for balanced paranthesis
    reversing items
    infix to prefix/postfix
    evaluation of prefix/postfix
    stack span problem and its variations
    undo/redo or forward/backward

*/

// STACK STL
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

  // push() , pop() , size() , top() , empty() -> returns 1 when stack is empty 
  // all these operations have O(1) time complexity
  stack<int>s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout<<s.size()<<"\n";
  cout<<s.top()<<"\n";
  s.pop(); // don't returns the top value , just delets it from the stack
  int x = s.top();
  cout<<s.top();

  // stack cna be implemented on any underlying container that 
 // provides following operatons
   // back() , size() , empty() , push_back() , pop_back();
   // in STL it is implemented using DQ.
   // it is called container adapter because it is implemented using other container.




return 0;
}