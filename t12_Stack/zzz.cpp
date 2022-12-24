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

// 1 3 5 7
// 0 2 4 8 
node* m(node *a , node *b)
{
     node *res = NULL;
     if(a == NULL) return b;
     if(b == NULL)return a;

     while(a!=NULL and b!=NULL)
     {
          if(a->data <= b->data)
          {
              if(res == NULL) res = a;
              else res->next = a;

              a=a->next;
              res = res->next;
          }
          else
          { 
             if(res == NULL) res = b;
              else res->next = b;

              b = b->next;
              res = res->next;
          }
     }

     if(b != NULL)
     {
        res->next = b;
        
     }
     else if(a != NULL)
     {
          res->next = a;
     }
     else res->next = NULL;
     
   return res;
}

void printList(node *head)
{
      while(head != NULL)
      {
          cout<<head->data<<"\n";
          head = head->next;
      }
}
int main()
{
   
   node *a = new node(1);
   a->next = new node(3);
   a->next->next = new node(5);
   a->next->next->next = new node(7);
   node *b = new node(0);
   b->next = new node(2);
   b->next->next = new node(4);
   b->next->next->next = new node(8);
 
    cout<<"hello\n";
   node* res = m(a,b);
    cout<<"hello\n";
   printList(res);


    



return 0;
}