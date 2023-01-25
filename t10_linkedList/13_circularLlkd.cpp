#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
// curcular linkde ->last node pointing back to the first node;
//advantaes->
 we can traverse the whole list from any node
 implementation of algorithms like round robin 
 we can insert at the begining and end by just remaining
 one tail reference/pointer.
 //disadvantages->
 implementatio of operations becomes complex

 */
struct node
{

     int data;
     node *next;
     node(int d)
     {
          data = d;
          next = NULL;
     }
};

int main()
{
#ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
#endif

     node *head = new node(10);
     head->next = new node(5);
     head->next->next = new node(20);
     head->next->next->next = new node(15);
     head->next->next->next->next = head;

     return 0;
}