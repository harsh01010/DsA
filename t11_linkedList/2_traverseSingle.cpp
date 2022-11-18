#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct NODE
{
  int data;
  NODE *next;
  NODE(int x)
  {
    data = x;
    next = NULL;
  }
};

void traverse(NODE *head)
{

  while (head->next != NULL)
  {
    cout << head->data << "\n";
    head = head->next;
  }
  cout << head->data << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
#endif
  NODE *head = new NODE(20);
  head->next = new NODE(30);
  head->next->next = new NODE(40);
  head->next->next->next = new NODE(5000);

  traverse(head);

  return 0;
}

/*
 In C++ , if we call a function by passing a pointer variable then the changes
 made on the pointer in te function such that  ,  e.t.c.  do not reflect in main.
 */