#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
     int data;
     node *next;
     node *prev;

     node(int x)
     {
          data = x;
          next = prev = NULL;
     }
};

int display(node *head)
{
      int n = 0;
      if(head == NULL){return n;}
      cout<<"NULL";
      while(head)
      {
          cout<<" <- "<<head->data<<" -> ";
          head = head->next;
          n++;
      }
      cout<<"NULL\n";
      return n;
}


int main()
{
    
 int n; 
 cout<<"enter total number of nodes to be inserted in the list\n"; cin>>n;

 int x; cin>>x;
 node *head = new node(x);
   n--;
   node *curr = head;
 while(n--)
 {
      cin>>x;
     node *temp = new node(x);
     curr->next = temp;
     temp->prev = curr;
     curr = temp;
 }

 display(head);

return 0;
}