#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


class que{
    list<int>lst;
    int size = 0;
    public:
   
    void enque(int x)
    {
       lst.push_back(x);
       size++;
    }
    void deque()
    {
        lst.pop_front();
    }
     int getSize()
     { 
           return size;
     }
     int getRear()
     {
          return lst.back(); 
     }
     int getFront()
     {
          return lst.front();
     }
};
int main()
{
     que Q;

     Q.enque(39);
     Q.enque(44);
     Q.enque(444);
     cout<<Q.getRear()<<" "<<Q.getFront()<<"\n";
     
     
     



return 0;
}