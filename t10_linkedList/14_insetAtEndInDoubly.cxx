#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
       int data;
       node* next;
       node* prev;
       node(int x)
       {
            data = x;
            next = NULL;
            prev = NULL;
       }
};

node* insertAtEnd(node* head , int x)
{
     node* newNode = new node(x);
     if(head == NULL) return newNode;
     node* curr = head;
   while(head->next != NULL)
   {
      head = head->next;
   }

   head->next = newNode;
   newNode->prev = head;
      
      return curr;
}


int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

     



return 0;
}