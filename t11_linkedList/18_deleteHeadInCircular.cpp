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

void display(node* head)
{
      if(head == NULL) return;
      node*curr = head;
      do{
           cout<<head->data<<" ";
           head = head->next;
      }while(head != curr);
}

node* insertAtEnd(node*head , int x)
{ 
      node* newNode = new node(x);
      if(head == NULL) 
      {
            newNode->next = newNode;
            return newNode;
      }

      newNode->next = head->next;
      head->next = newNode;
      int t = newNode->data;
      newNode->data = head->data;
      head->data = t;
      return newNode;

}
//O(node)
node* deleteHead(node*head)
{
     if(head == NULL) return NULL;
     if((head->next == head))
     {
           delete head;
           return NULL;
     }
  node*curr=head;
     while(curr->next != head)
   {
       curr = curr->next;
   }
   curr->next = head->next;
    head->next = NULL;
    return curr->next;

}

// efficient
/*
     10->20->30->40
     <------------|

     20->20->30->40  copy the data of 2nd node to head
     <------------|
                
     20->30->40   delete the 2nd node
     <--------|
*/

node* deleteHD(node* head)
{
      if(head == NULL) return NULL;
      if(head->next = head)
      {
            delete head;
            return NULL;
      }

      head->data = head->next->data;
       node* temp = head->next;
     head->next = head->next->next;
     delete temp;
     return head;
}

int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif
    
    node* head= NULL;

     int n; cin>>n;
     int x;  
     for(int i=0;i<n;i++)
     {
          cin>>x;
          head = insertAtEnd(head,x);
     }

     display(head); cout<<"\n";
     display(deleteHead(head));

     



return 0;
}