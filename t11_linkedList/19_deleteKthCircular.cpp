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

node* insertEnd(node* head , int x)
{
       node* newNode = new node(x);
       if(head == NULL)
       {
            newNode -> next = newNode;
            return newNode;
       }
       int t = head->data;
       head->data = newNode->data;
       newNode->data = t;

       newNode->next = head->next;
       head->next = newNode;


       return newNode;


}

node* deleteKth(node*head , int k)
{
      if(head == NULL)
      {
           return NULL;
      }
      if(head->next = head)
      {
           delete head;
           return NULL;
      }
      if(k==1)
      {
           head->data = head->next->data;
           node* temp = head->next;
            head->next = head->next->next;
            delete temp;
            return head;
      }
      node* curr= head;
      for(int i = 1 ;i<k-1;i++) // 
      {
           curr = curr->next;
      }
      
      node* temp = curr->next;
      curr->next = curr->next->next;
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
          head = insertEnd(head,x);
     }

     display(head); cout<<"\n";
    

     



return 0;
}