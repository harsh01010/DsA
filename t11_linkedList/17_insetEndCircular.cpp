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
 // O(n)
node* insertEnd(node*head , int  x)
{   node* temp = new node(x);
       if(head == NULL)
       { temp->next = temp;
       return temp;
       }

       node* curr = head;
       while(curr->next != head)
        curr = curr->next;

        curr->next = temp;
        temp->next = head;
        return head;
}
 //efficient
 //1 we can maintain a tail pointer , but this will change the structure of the linked list.
 //2 without changing the structure of the linked list

node* insertAtEnd(node*head , int x)
{ 
     /*      x
         10   15 -> 40   insert x at the 2nd position , now swap the data of 1st and 2nd node
        <-------------|  change the head pointer to the 2nd node(that we have just inserted), thats it!
       
         new head      
       x->10->15->40   x is pointin to 10 , that is head , hence it has been inserted at end.
       <-----------|
       */
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

     display(head);
     



return 0;
}