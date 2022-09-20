#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct node
{
     int data;
     node* next;
};


void print(node* x)
{
        while(x!=nullptr)
        {
              cout<<x->data<<" ";
              x = x->next;
        }
}
int main()
{

    //   node* head = new node();
    //   node* second = new node();
    //   node* third  = new node();

    //   head->data = 5;
    //   head->next = second;
    
    // second->data = 6;
    // second->next = third;

    // third->data = 7;
    // third->next = NULL;

    //print(head);

   int n; cin>>n;


   node arr[n];

    for(int i=0;i<n;i++)
    {
          int x;
           cin>>x;
        (arr + i)->data = x;
        if(i<n-1) (arr+i)->next = (arr+i+1);
        else (arr+i)->next = nullptr;
    }
    print(arr);


return 0;
}