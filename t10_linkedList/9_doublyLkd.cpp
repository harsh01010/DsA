#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

 /* Advantages of doubly linked list:
    -> can be traversen in both directions
    ->a given node can be deleted in O(1)
    ->insert/delete before a given node
    ->insert delete from both ends in O(1) time by maintaining tail.

    Disadvantages of doubly linked list:
    ->extra space for prev
    ->code becomes more complex

    */
struct node
{
      int data;
      node* prev;
      node* next;
      node(int d)
      {
          data = d;
          prev = NULL;
          next = NULL;
      }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    
    node* head = new node(10);
    node* temp1 = new node(20);
    node* temp2 = new node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;


return 0;
}
