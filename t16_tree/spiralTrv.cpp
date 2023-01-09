#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void spiralTrv(node *root)
{
    deque<node *> dq;
    dq.push_front(root);
    bool f = true;
    while (!dq.empty())
    {
        int n = dq.size();
        while (n--)
        {
            if (f)
            {
                node *temp = dq.back();
                cout << temp->data << " ";
                dq.pop_back();
                if (temp->right)
                    dq.push_front(temp->right);
                if (temp->left)
                    dq.push_front(temp->left);
            }
            else
            {
                node *temp = dq.front();
                cout << temp->data << " ";
                dq.pop_front();
                if (temp->left)
                    dq.push_back(temp->left);
                if (temp->right)
                    dq.push_back(temp->right);
            }
        }
        f = !f;
    }
}

int main()
{
    node *root = new node(20);
    root->right = new node(8);
    root->left = new node(12);
    root->right->left = new node(3);
    root->right->right = new node(59);
    spiralTrv(root);

    return 0;
}