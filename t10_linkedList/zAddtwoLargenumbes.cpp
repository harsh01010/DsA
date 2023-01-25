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
        next = nullptr;
    }
};

void traverse(node *head)
{
    while (head)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << "\n";
}

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
        int y = l1->data + l2->data + c;
        node *bit = new node(y % 10000);
        bit->next = head;
        head = bit;

        c = y / 10000;
        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1)
    {
        int y = l1->data + c;
        node *bit = new node(y % 10000);
        bit->next = head;
        head = bit;

        c = y / 1000;
        l1 = l1->next;
    }

    while (l2)
    {
        int y = l2->data + c;
        node *bit = new node(y % 10000);
        bit->next = head;
        head = bit;

        c = y / 10000;
        l2 = l2->next;
    }

    if (c)
    {
        node *bit = new node(c);
        bit->next = head;
        head = bit;
    }

    node*curr = head;
    cout<<"sum of these numbers = ";
    while(curr)
    {
        cout<<curr->data;
        curr = curr->next;
    }
    cout<<"\n";

    return (head);
}
int main()
{

    string num1, num2;
    cout << "enter the first number\n";
    cin >> num1;
    cout << "enter the second number\n";
    cin >> num2;

    // 1 2345 6789
    node *l1H = NULL, *l1T = NULL, *l2H = NULL, *l2T = NULL;
    int x = num1.length() % 4;
    int y = num2.length() % 4;
    if (x)
        l1H = l1T = new node(stoi(num1.substr(0, x)));
    if (y)
        l2H = l2T = new node(stoi(num2.substr(0, y)));

    for (long long i = x; i < num1.length(); i += 4)
    {

        node *temp = new node((stoi(num1.substr(i, 4))));
        if (l1H)
        {
            l1T->next = temp;
            l1T = temp;
        }
        else
            l1H = l1T = temp;
    }

    for (long long i = y; i < num1.length(); i += 4)
    {
        node *temp = new node(stoi(num2.substr(i, 4)));
        if (l2H)
        {
            l2T->next = temp;
            l2T = temp;
        }
        else
            l2H = l2T = temp;
    }



    //traverse(l1H);
    //traverse(l2H);

    node*sum = fucn(l1H,l2H);

    return 0;
}