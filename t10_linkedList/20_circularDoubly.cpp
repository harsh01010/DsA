#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// circular doubly linked list
/*
 prev of first node = last node
 next of last node = first node

 // advantages:
 1-> we get all advantages of circular and doubly linked lists
 2-> we can access last node in constant time without maintaining
  extra tail pointer.

*/
struct node{
       int data;
       node* prev;
       node* next;
       node(int x)
       {
            data = x;
            prev = NULL;
            next = NULL;
       }
};

node* insetBeg(node* head , int x)
{
     node* newnode = new node(x);
     if(head == NULL)
     {
            newnode->next = newnode;
            newnode->prev = newnode;
            return newnode;
     }
     
      newnode->prev = head->prev;
      newnode->next = head;
      head->prev = newnode;
      return newnode;
       
}

int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

     



return 0;
}