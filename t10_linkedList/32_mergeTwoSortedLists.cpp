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

node* mergeLists(node* h1 , node* h2)
{
      node *head = NULL , *tail = NULL;
      if(h1->data <= h2->data)
      {
           head = tail = h1; h1 = h1->next;
      }
      else{
            head = tail = h2; h2 = h2->next;
      }

     while(h1 and h2)
     {
          if(h1->data <= h2->data)
            {
                   tail->next = h1; tail = h1; h1 = h1->next;
            }
            else
            {
                  tail->next = h2; tail = h2; h2  = h2->next;
            }
     }
     if(h1 == NULL) tail->next = h2;
     else tail->next = h1;
     return head;


}

void display(node *h)
{
      while(h)
      {
          cout<<h->data<<' ';
          h = h->next;
      }
       cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    node* h1 = new node(1);
    h1->next = new node(5);
    h1->next->next = new node(8);
    h1->next->next->next = new node(11);
    display(h1);
    node*  h2 = new node(3);
    h2->next  = new node(4);
    h2->next->next = new node(5);
    display(h2);
    h1 = mergeLists(h1 , h2);
    display(h1);
    



return 0;
}