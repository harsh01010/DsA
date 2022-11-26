#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
      int data;
      node* prev;
      node* next;
      node(int x)
      {
          data = x;
           prev = next = NULL;
      }
};

node* deleteLast(node* head)
{
     node* curr = head;
     while(curr -> next != NULL)
     {
          curr = curr->next;
     }
     
     if(curr == head)
     {
         return NULL;
     }

     else{
         (curr->prev)->next = NULL;
         curr->prev = NULL;
         return head;
     }
      
}
void display(node* head)
{
      while(head!=NULL)
      {
          cout<<head->data<<" ";
          head = head->next;
      }
}
void insert(node*head , int x)
{
      node* curr= head;
     while(curr->next != NULL)
     {
          curr = curr->next;
     }
     node* newNode = new node(x);
     curr->next = newNode;
     newNode->prev = curr;
}
int main()
{   
      #ifndef ONLINE_JUDGE
        freopen("i_p.txt", "r", stdin);
        freopen("o_p.txt", "w", stdout);
        #endif
    
      int n; cin>>n;
      int x; cin>>x;
      node* head = new node(x);
    //  insert(head , x);
      for(int i=1;i<n;i++)
      {
           cin>>x;
           insert(head , x);
      }

      cout<<" the liked after inserting values:\n"; display(head);
     cout<<"\n";
       cin>>n;
      for(int i=0;i<n;i++)
      {
         head = deleteLast(head); 
     }
     cout<<" the linked list afte deleting "<<n<<" values from last is:\n"; 
     display(head);

return 0;
}