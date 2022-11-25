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

void insertAtEnd(node *head, int x)
{
    node *lastNode = new node(x);

    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = lastNode;
}

void printList(node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << head->data << "\n";
}

void insertAt(node *head, int x, int pos)
{

    node *newNode = new node(x);
    for (int i = 1; i < pos - 1; i++)
    {
        head = head->next;
    }
    node *temp = head->next;
    head->next = newNode;
    head->next->next = temp;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int x;
    cin >> x;
    node *myList = new node(x);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        insertAtEnd(myList, x);
    }

    printList(myList);

    insertAt(myList, 34, 5);

    printList(myList);
    return 0;
}