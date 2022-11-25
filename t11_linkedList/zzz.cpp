#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
      int data;
      node* prev;
      node* next;
      node(int x)
      {
          data = x;
           prev = next = NULL;
      }
};

node* deleteLase(node* head)
{
     node* curr = head;
     while(curr -> next != NULL)
     {
          curr = curr->next;
     }
     
     if(curr == head)
     {
         return NULL;
     }

     else{
         (curr->prev)->next = NULL;
         curr->prev = NULL;
         return head;
     }
      
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    



return 0;
}