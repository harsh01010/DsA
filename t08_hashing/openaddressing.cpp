
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

class myhash
{
public:
  int size = 0;
  int capacity;
  int *table;

  myhash(int n)
  {
    table = new int[n];
    memset(table, -1, sizeof(table));
    capacity = n;
  }

  int hash(int key)
  {
    return key % capacity;
  }
  bool insert(int key)
  {
    int i = hash(key);

    if (size == capacity)
      return false;

    while (i != -1 or i != -2 or table[i] != key)
    {
      i = (i + 1) % capacity;
    }
    if (table[i] == key)
      return false;
    else
    {
      table[i] = key;
      size++;
      return true;
    }
    return false;
  }

  bool search(int key)
  {
    int h = hash(key);
    int i = h;

    while (table[i] != -1)
    {
      if (table[i] == key)
        return true;

      i = (i + 1) % h;
      if (i == h)
        return false; // traversed circularly and got same index agian
    }
    return false;
  }
};

int main()
{
#ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
#endif

  myhash table(10);

  table.insert(44);

  return 0;
}

/*

   OPEN ADDRESSING

   hash tale is created using a array.

   no. of slots int hash table >= no of keys to be inserted

   3. ways : linear probing , quadratic probing , double hashing

   linear probing:
   arr -> n+1
   hash(key)  = key%7

   table[ hash(key) ] = arr[i] , if it is  already occupied,

   h(key,i) = (hash(key)+i)%7 -> i is no. of times we get occupied slot , since we get previous empty slot.

   problems:
     .if we delete a element then it will create an empty slot ,this problem can be solved by marking the deleted slots
     clustering:
      primary clustering: group of elements , then some empty spaces , and again some group of some elements.(empty slots between two group of elements)
      secondary clustering: geting same index by the hash funciton again and again

    2. quadratic hahsing :
      hash(key,i) = (h(key) + i^2 )%m , this function will be used if we get occupied index from our hash function.

      in quadratic hashing it might happen that it does not find any empty slot even if there is empty slot,

       if  alpha(n/m) < 0.5 and m is prime then oly quadrtic probing will find an empty slot.

   3. double hashing
     hahs(key,i  )  = (h1(key) + i*(h2(key)))%m

      h1(key) = key%6
      h2(key) = 6 - (key%6) [because the value of h2 should not be zero ,other wise we will keep getting same slot again and agian]

     .if h2(key) is relatively prime to m then it always finds a empty slot if there is one,

     . distributes keys moe uniformly than linear and quadratic probing

     . there is no clustring in double hashing



 if alpha = 0.8 ->  n/m

   80 per occupied , 20 per empty -> 1/5
     or in other words , on average in 5 iterations will take for unsucessful search

     or , 1/(1-alpha).

     */
