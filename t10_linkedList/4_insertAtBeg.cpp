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


     node* insertAtBegining( node* head , int x)
     {
                node* beg = new node(x);
                beg->next = head;
                return beg;
     }
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

      node* head = new node(10);
       head->next = new node(20);
       head->next->next = new node(40);
       head->next->next->next = new node(50);

         int x = 99;

          head = insertAtBegining(head,x);

return 0;
}