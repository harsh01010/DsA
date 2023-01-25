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

void Traversecircular(node *head)
{
      // 10 => only one node-> while(head->next != head) will not print for this

      if(head == NULL) cout<<"the linked list has zero elements\n";
      cout<<head->data<<" "; // 1st print the head
      for(node* i = head->next;i!=head;i = i->next)
      {
          cout<<(i->data)<<" ";
     
      }
      /*
      node*p = head;
      do{
           cout<<(p->data)<<" ";
           p = p->next;
      }while(p!=head);
      */
      
}



int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

     



return 0;
}