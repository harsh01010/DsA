#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
      int data;
      node* next;
};


void print(node*x)
{
        while(x->next != nullptr)
        {
              cout<<x->data<<"\n";
              x = x->next;
        }
}

int main()
{
    

         int n;
          cout<<"enter the total number of node in the linked list\n";
          cin>>n;
          node arr[n];
          for(int i=0;i<n;i++)
          {
              int x; cin>>n;
              arr[i]->data = x;
              if(i == n-1) arr[i]->next = nullptr;
              else arr[i]->next = arr[i+1];
          }

     print(arr[0]);



return 0;
}