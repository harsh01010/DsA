#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

//  merge k sorted linked lists , use same method used in merge k sorted array
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct comp
{
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};
Node *mergeKLists(Node *arr[], int K)
{
    priority_queue<Node *, vector<Node *>, comp> pq;
    for (int i = 0; i < K; i++)
    {
        if (arr[i] != NULL)
            pq.push(arr[i]);
    }
    Node *head = NULL;
    Node *tail = head;
    while (pq.size())
    {
        Node *x = pq.top();
        pq.pop();
        if (x->next)
            pq.push(x->next);
        if (head == NULL)
            head = tail = x;
        else
        {
            tail->next = x, tail = tail->next;
        }
    }
    return head;
}

int main()
{

    return 0;
}