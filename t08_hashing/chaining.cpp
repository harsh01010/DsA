#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


class myhash{
     
     private:
      int bucket;

      list<int> *node;

      public:

      myhash(int n)
      {
          bucket = n;
         node = new list<int> [n];
      }

       void  insert(int n)
      {
          int i = n%bucket;
          node[i].push_back(n);
      }

      void remove(int n)
      {
          int i = n%bucket;
          node[i].remove(n);
      }

      bool search(int n)
      {
          int i = n%bucket;
           for(auto it:node[i]) 
            if(it == n) return true;
            return false;
      }

      void traverse()
      {   cout<<"_____________HASH TABLE___________\n";
          for(int i=0;i<bucket;i++)
          {     if(node[i].size() != 0)
               {
                 for(auto it:node[i]) cout<<it<<"-->";
               }
               cout<<"NULL \n";
          }
      }



};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

          int n; 
   myhash table(10);
     cin>>n;
   for(int i=0;i<n;i++)
   {
      int x; cin>>x;
       table.insert(x);
   }
      
      table.traverse();

return 0;
}

/*

 hahsh(key) = key%7 (any prime number is generally taken)
 we create an array of linked list to hadle collision , vector and binary trees can also be used.

 perfomance of chaining:
m = no. of slots in hash table.
n = no. of keys to be inserted

  load factor(alpha) = n/m (should be small , i.e all the keys should be equally distributed)

  expected chain length = alpha

  expected time to search an element :O(alpha + 1);
  expected time to inserted/del : O(1+alpha)

  */
