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
unordered_set<int> st;
void f(node *root, int k = 0)
{
    if (root == NULL)
        return;
    f(root->left, k - 1);
    st.insert(k);
    f(root->right, k + 1);
}

int VerticalWidth(node *root)
{
    st.clear();
    f(root);
    return st.size();
}

int main()
{
    node *root = new node(10);
    root->right = new node(20);
    root->left = new node(30);
    root->left->left = new node(40);
    root->left->left->left = new node(50);
    root->left->left->right = new node(60);
    root->left->right = new node(70);
    root->left->right->right = new node(80);
    root->left->right->right->right = new node(90);

    /*
                              10
                           /     \
                         30       20
                      /    \
                    40      70
                   /  \      \
                50     60     80
                               \
                                90
    */
    int vw = VerticalWidth(root);
    cout << vw << "\n";

    return 0;
}
