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
 node* insertBegin(node* head , int x)
 {
        node* newNode = new node(x);
        newNode->next = head;
        head->prev = newNode;
        return newNode;
 }
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    



return 0;
}