#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
  int x;
  node *next;
  node(int data)
  {
    x = data;
    next = NULL;
  }
};

void traverse(node *);

node *rev(node *head)
{
  node *curr = head;
  node *prev = NULL;
  while (curr)
  {
    node *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

// function to add two numbers represented by two linked lists

node *fucn(node *l1, node *l2)
{
  l1 = rev(l1);
  l2 = rev(l2);

  // traverse(l1);
  // traverse(l2);

  node *head = NULL;
  int c = 0;

  while (l1 != NULL and l2 != NULL)
  {
    int y = l1->x + l2->x + c;
    node *bit = new node(y % 10);
    bit->next = head;
    head = bit;

    c = y / 10;
    l1 = l1->next;
    l2 = l2->next;
  }

  while (l1)
  {
    int y = l1->x + c;
    node *bit = new node(y % 10);
    bit->next = head;
    head = bit;

    c = y / 10;
    l1 = l1->next;
  }

  while (l2)
  {
    int y = l2->x + c;
    node *bit = new node(y % 10);
    bit->next = head;
    head = bit;

    c = y / 10;
    l2 = l2->next;
  }

  if (c)
  {
    node *bit = new node(c);
    bit->next = head;
    head = bit;
  }

  traverse(head);

  return (head);
}

void traverse(node *head)
{
  while (head)
  {
    cout << head->x << " ";
    head = head->next;
  }
  cout << "\n";
}

int main()
{
  node *head = new node(1);
  head->next = new node(2);
 // head->next->next = new node(3);
 // head->next->next->next = new node(4);

  node *head1 = new node(9);
  head1->next = new node(9);
  head1->next->next = new node(9);
  head1->next->next->next = new node(9);

  traverse(head);
  traverse(head1);

  node *res = fucn(head, head1);
  // traverse(res);
  return 0;
}