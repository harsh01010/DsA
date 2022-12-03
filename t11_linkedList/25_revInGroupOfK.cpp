#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
      int data;
      node *next;
      node(int x)
      {
            data = x;
            next = NULL;
      }
};

node *revInGroupOfK(node *head, int k)
{
      node *prev = NULL, *next = NULL;
      node *curr = head;
      int cnt = 0;
      while (curr != NULL and cnt < k)
      {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
      }
      if (next != NULL)
      {
            head->next = revInGroupOfK(next, k);
      }
      return prev;
}

void display(node *head)
{
      while (head != NULL)
      {
            cout << head->data << " ";
            head = head->next;
      }
      cout << "\n";
}
int main()
{
#ifndef ONLINE_JUDGE
      freopen("i_p.txt", "r", stdin);
      freopen("o_p.txt", "w", stdout);
#endif

      node *head = new node(10);
      head->next = new node(20);
      head->next->next = new node(30);
      head->next->next->next = new node(40);
      head->next->next->next->next = new node(50);
      head->next->next->next->next->next = new node(60);
      head->next->next->next->next->next->next = new node(70);
      head->next->next->next->next->next->next->next = new node(80);

      display(head);
      head = revInGroupOfK(head, 3);
      display(head);

      return 0;
}