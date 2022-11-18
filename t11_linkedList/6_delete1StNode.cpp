#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
      int data;
      node* next;
      node(int x)
      {
          data = x;
           next = NULL;
      }
};

node* deleteHeadNode(node* head)
{         if(head = NULL) return NULL;
       node* newhead = head->next;
       delete head; // deallocating memory
       return newhead;
}

node* deleteLastNode(node*head)
{
     if(head == NULL) return NULL;
     node* curr = head;
     while(curr->next->next != NULL)
     { curr = curr->next;
     }
     delete curr->next;
     curr->next = NULL;
     return head;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    



return 0;
}