#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
       int data;
       node*prev;
       node*next;
       node(int x)
       {
          data = x;
            prev = NULL;
             next = NULL;
       }
};

void insertAtEnd( node* head , int x)
{
         node* newNode = new node(x);
       while(head ->next != NULL)
       {      
            head = head->next;
       }
       head->next = newNode;
       newNode->prev = head;
}

void printLkd(node* head )
{
       while(head != NULL)
       {
          cout<<head->data<<" ";
          head = head->next;
       }
       cout<<"\n";
}

node* reverseLLkd(node* head)
{
        if(head == NULL or head->next == NULL) return head;

        node* p = NULL; node* curr = head;
        while(curr != NULL)
        {
              p = curr->prev;
              curr->prev = curr->next;
              curr->next = p;

               curr = curr->prev; // sice the pointers have been swapped , to 
                                // go to next node we have to refer to the prev pointer insted of next.
        }
        return p->prev;


}

int main()
{
   
    node* llkd = new node(20);
     insertAtEnd(llkd , 30);
     insertAtEnd( llkd , 50);
     insertAtEnd(llkd , 88);
     insertAtEnd(llkd , 99);
     printLkd(llkd);
     llkd = reverseLLkd(llkd);
     printLkd(llkd);


    



return 0;
}