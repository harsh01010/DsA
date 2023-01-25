#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

  struct node{
      int data;
      node*next;
      node(int x)
      {
         data = x;
         next = NULL;
               }
  };


  void pairSwap(node*head)
  {
     node* curr = head;
     while( curr != NULL  and curr->next != NULL)
     {
          int x = curr->data;
          curr->data = curr->next->data;
          curr->next->data = x;
          curr = curr->next->next;
     }
  }

  void display(node* head)
  {
      while(head != NULL)
      {
         cout<<head->data<<' ';
         head = head->next;
      }
  }
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("i_p.txt", "r", stdin);
    // freopen("o_p.txt", "w", stdout);
    // #endif

  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
    display(head);
  pairSwap(head);
  cout<<"\n";
  display(head);
  
    



return 0;
}