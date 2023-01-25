#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct node{
    int data;
    node* next;
    node* rand;
    node(int x)
    {
      data = x;
      next = NULL;
    }
};

node* copy(node* head)
{
    node* curr = head;
    node*temp = head;
     while(curr)
     {
         node* temp2 = new node(curr->data); // creating a node
         temp = curr->next;  // storing next of curr
          curr->next = temp2;  //changing the next of curr to the new cureated node
          temp2->next = temp; // next of the new created node is next of previous node

         curr->next->next = temp; // moving ahead by skipping the new created node
         curr = temp; // moving ahead
     } 
     curr = head;
     node* ans = head->next;
     node* copy2 = ans;
      // handling the randon pointer
     while(curr)
     { 
       curr->next->rand = curr->rand ? curr->rand->next:curr->rand;

       curr = curr->next? curr->next->next:curr->next;
       
     }
     curr = head;
     node* copy = head->next;
     temp = copy;
     // segregating the copied list from the original list
     while(curr and copy)
     {
      
      curr ->next = curr->next->next;
       copy->next=copy->next?copy->next->next:copy->next;
       curr=curr->next;
       copy = copy->next;
     }
     return temp;
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif
 
  



return 0;
}