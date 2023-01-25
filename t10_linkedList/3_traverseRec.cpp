#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
     int data;
     node* next;
       node(int x)
       {
          data = x;
            next = NULL;
       }
};

void traverse( node*head)
{
      if(head->next == NULL)
      {
          cout<<head->data<<"\n";
           return;
      }

      cout<<head->data<<"\n";
      traverse(head->next);
}



int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

      node* head = new node(50);
      head->next = new node(60);
      head->next->next = new node(66);
      head->next->next->next = new node(88);

      traverse(head);



return 0;
}