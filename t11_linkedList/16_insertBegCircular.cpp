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
   // Naive solution
node* insertBegin(node*head , int x)
{
       node* newHead= new node(x);
       if(head == NULL) 
       {
            newHead->next = newHead;
            return newHead;
       }

       node* curr = head;
       while(curr->next != head)
       {
            curr = curr->next;
       }
       curr->next = newHead;
       newHead->next = head;
}

 // efficient solution
 node* insertBeg(node*head , int x)
 {
       node* newNode = new node(x);
       if(head == NULL)
        return newNode;
        else{
          // insert the new node at 2nd position
           newNode->next = head->next;
           head->next = newNode;  
            // swap the data of 1 and 2nd node
           int t = head->data;
           head->data = newNode->data;
           newNode->data = t;
           return head; // head pointer will remain same , but the data will be swapped.
        }
 }
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

     



return 0;
}