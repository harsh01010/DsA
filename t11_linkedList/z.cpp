#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
          int data;
          node *next;
          node(int x)
          {
                  data = x;
                  next = NULL;
          }
};

void func(node *head)
{
           node* curr = head;
           cout<<"head = "<<head<<" ";
           while(curr != NULL)
           {
                    cout<<"[ "<<curr->data<<" ,"<<curr->next<<" ] -> ";
                    curr = curr->next;
                    cout<<" curr = "<<curr<<" ";
           }
}

int main()
{
        // #ifndef ONLINE_JUDGE
        // freopen("i_p.txt", "r", stdin);
        // freopen("o_p.txt", "w", stdout);
        // #endif

  node *head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);

   func(head);
        



return 0;
}