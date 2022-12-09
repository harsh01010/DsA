#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
   insert(x)
   {
      Look for x in the hash table


         (a) if found (hit) find the refrence of the node in 
         doubly linked list, move the node to the front of the dll.

         (b)if not found(miss)
         1. insert a new node at the front of dll.
         2. insert an entry into the hast table.

         
   }

*/

class LRU{
      private:
       list<int>mem;
       unordered_map<int,int>KV;
       unordered_map<int,list<int>::iterator>adrs;
       int cap;
       public:
       LRU(int);
       void insert(int , int );
        int get(int);
};

LRU::LRU(int cap)
{
      this->cap = cap;
}

void LRU::insert(int key , int value)
{    // not already present
        if(KV.find(key) == KV.end())
        {    
             // size is equls to capacity
               if(mem.size() == cap)
               {
                   int x = mem.back();
                   mem.pop_back();
                   adrs.erase(x);
                   KV.erase(x);
               }
        }

        else{
              mem.erase(adrs[key]);
        }
        mem.push_front(key);
        adrs[key] = mem.begin();
        KV[key] = value;

}

int LRU::get(int key)
{
   if(KV.find(key) == KV.end()) return -1;
    mem.erase(adrs[key]);
    mem.push_front(key);
    adrs.erase(key);
    adrs[key] = mem.begin();
    return KV[key];  
}

int main()
{
    LRU cache(2);

   cache.insert(1,2);
   cache.insert(2,3);
   cache.insert(1,5);
   cout<<cache.get(2)<<"\n";
   cache.insert(3,4);
   cache.insert(2,4);
   cache.insert(4,5);
   cout<<cache.get(2)<<"\n";


    



return 0;
}