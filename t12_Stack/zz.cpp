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
node* create()
{
        cout<<"enter the total number of nodes in the linked list\n";
        int n; cin>>n;
       
       cout<<"enter the data at nodes\n";
       int x;
       cin>>x;

       node *head = new node(x);
       node *curr = head;
       for(int i=0;i<n-1;i++)
       {    cin>>x;
            node *temp = new node(x);
            head->next = temp;
            head = temp;
       }
       return curr;
}

 void traverse(node *head)
 {
        if(head == NULL)
         {
             cout<<"list  is empty\n"; return;
         }
         while(head != NULL)
         {
              cout<<head->data<<" ";
              head = head->next;
         }
         cout<<"\n";
 }

int midFind(node *head)
{
        if(head == NULL)
        {
             cout<<"it is empty\n";
             return -1;
        }
        node *ptr1 = head , *ptr2 = head;
        while(ptr2!= NULL and ptr2->next != NULL)
        {
               ptr1 = ptr1->next;
               ptr2 = ptr2->next->next;
        }
        return ptr1->data;
}

int count(node *head)
{
        int cnt = 0;
        while(head != NULL)
        {
              cnt++;
              head = head->next;
        }
        return cnt;

}

int main()
{

      node *head =  create();
      traverse(head);

    int mid = midFind(head);
    cout<<"mid = "<<mid<<"\n";
      
     



return 0;
}