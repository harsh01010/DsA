#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
       int data;
       node* next;
};
int findMiddle(node* head) // in one traversal
{ /*
   slow moves one move at a time 
   fast moves two moves at a time
   slow will be at mid , when fast reaches to the end
   */
    node* fast=  head, *slow = head;
  while(fast->next != NULL)
  {
      slow = slow->next;
      if(fast->next->next !=NULL)
      fast = fast->next->next;
      else fast = fast->next;
  }
  return slow->data;

     
}

int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

     



return 0;
}