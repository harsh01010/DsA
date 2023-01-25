#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
       int data;
       node* next;
       node(int x)
       {
           data = x;
            next = NULL;
       }
};

/* 
 Nth node form end
 1. find the length of the linked list
 2. Using two pointer/refrences

   10->20->30->40->50->60->70
   
   move first N position ahead
   now start moving both pointer 1 position in each iterations
   the differece of last and the first pointer will be N.
   and when 2nd pointer will become NULL first pointer will give Nth from end.
   
*/

int NthformEnd(node*head , int n)
{
     node* first = head , *second = head;
    for(int i=0;i<n;i++)
    {
       if(first == NULL) return -1;
       first = first->next;
    }
    while(first != NULL)
    {
       second=second->next;
       first = first->next;
    }
    return second->data;
}

int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif
 
  node* lkd = new node(10);
  lkd->next = new node(20);
  lkd->next->next = new node(30);
  lkd->next->next->next = new node(40);
  lkd->next->next->next->next= new node(50);

     



return 0;
}