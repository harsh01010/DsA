#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// deque in c++ stl




int main()
{
  // deque provides functionality of both stack and queue

  deque<int>dq = {10 , 20 , 30};
  // c++ allows random access and arbitarary insertion in deque 

  dq.push_front(5);
  dq.push_back(50);
   for(auto x:dq)
   {
     cout<<endl<<x<<" "<<dq.front()<<" "<<dq.back()<<"\n";
   }

   auto it = dq.begin();
   it++;
   dq.insert(it,20);
   dq.pop_back();
   dq.pop_front();
   int x =dq.size();

   // push_back , push_front , pop_back , pop_front all have O(1) time complexity  
  



return 0;
}