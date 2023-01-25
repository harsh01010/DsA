#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

     // queue in STL
     queue<int>Q;
     Q.push(22);
     Q.push(33);
     Q.push(55);  // enqueue
     Q.pop();
     Q.pop();
      int x = Q.front();
      int y = Q.back();
      while(Q.empty() == false)
      {
           cout<<Q.front()<<" "<<Q.back()<<"\n";
      }


      // all the abovee functions of queue have O(1) time complexity
return 0;
}