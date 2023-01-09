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
int m = 0;
vector<int> res;
void f1(node *root, int k)
{
    if (root == NULL)
        return;
    if (m < k)
    {
        res.push_back(root->data);
        m = k;
    }
    f1(root->left, k + 1);
    f1(root->right, k + 1);
}

void display(vector<int> v)
{
    for (auto it : v)
        cout << it << " ";
}

vector<int> f(node *root)
{
    res.clear();
    f1(root, 1);
    display(res);
    return res;
}

// iterative function
void fit(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int x = q.size();
        for (int i = 0; i < x; i++)
        {
            node *temp = q.front();
            q.pop();
            if (x == 0)
                cout << temp->data << ' ';
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

int main()
{
    node *root = new node(10);
    root->right = new node(60);
    root->left = new node(50);
    root->right->left = new node(70);
    root->right->right = new node(20);
    root->right->left->right = new node(8);

    f(root);

    return 0;
}

// #include <bits/stdc++.h>
// typedef long long int ll;
// using namespace std;

// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int x)
//     {
//         data = x;
//         left = right = NULL;
//     }
// };
// int m = 0;
// vector<int>res;
// void f1(node *root, int k)
// {
//     if(root==NULL) return;
//     if(m<k) { res.push_back(root->data); m = k;}
//     f1(root->left,k+1);
//     f1(root->right,k+1);
// }

// void display(vector<int>v)
// {
//     for (auto it:v) cout<<it<<" ";
// }

// vector<int> f(node *root)
// {
//     res.clear();
//     f1(root,1);
//     display(res);
//     return res;
// }

// int main()
// {
//     node*root = new node(10);
//     root->right = new node(60);
//     root->left = new node(50);
//     root->right->left = new  node(70);
//     root->right->right = new  node(20);
//     root->right->left->right = new  node(8);

//     f(root);

//     return 0;
// }