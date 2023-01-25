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


/*
   just change the pointers
   but store them in temoraray variables
   so that you don't loose hold on the next node.
   
*/
node* reverseLkd(node* head)
{
       node *curr = head;
       node *prev = NULL;
       while(curr != NULL)
       {
          node *next = curr->next;
           curr->next = prev;
           prev = curr;
           curr= next;
       }
       return prev; // prev is the new head
}
// above converted into recursive
node* fucn(node *curr , node *prev)
{
    if(curr == NULL) return prev;
    node *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr=next;
    return fucn(curr , prev);
}
node* rev(node* head)
{            // curr   prev
    return fucn(head , NULL);
}

// FRAZ
node* reverseRecLkd(node* head)
{
    if(head == NULL or head->next == NULL)
     return head;

     node* reverseHead = reverseRecLkd(head->next); // reverse the linked list from 2nd node to end , and give new head
     head->next->next = head;
     head->next = NULL;
     return reverseHead;
}


void display(node*head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}

int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

     
   node* head =  new node(10);
   head->next = new node(20);
   head->next->next = new node(30);
   head->next->next->next = new node(40);
   head->next->next->next->next = new node(50);

   display(head);
   head =reverseLkd(head);
   display(head); 
   head = reverseRecLkd(head);
   display(head);
   head = rev(head);
   display(head);
return 0;
}