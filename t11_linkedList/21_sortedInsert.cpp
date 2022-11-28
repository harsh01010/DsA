#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
       int data;
       node* next;
       node(int x)
       {
            data = x;
             next  = NULL;
       }
};

node* insertEnd(node* head ,int x)
{
       node* newNode = new node(x);
       if(head == NULL) return newNode;
       node*curr = head;
       while(curr->next != NULL)
       {
            curr = curr->next;
       }
       curr->next = newNode;
       return head;
}

node* insertSorted(node* head , int x)
{
      
      node*curr = head;
      node* temp = new node(x);
      if(head == NULL)
      {
           return temp;
      }
      else if(x<head->data)
      {
          temp->next = head;
          return temp;
      }
      while(curr->next!=NULL && curr->next->data < x)
      {
            curr = curr->next;
      }
      temp ->next = curr->next;
      curr->next = temp;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif
   
    node* head = NULL;
    int n; cin>>n;
     int x ;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        head = insertEnd(head , x);
    }

    // we have a sorted linked list
    cin>>x; // this number should be inserted in sorted manner only.
     



return 0;
}