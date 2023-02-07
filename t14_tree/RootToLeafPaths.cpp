#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct Node{
    int data;
    Node*left,*right;
    Node(int x) : data(x) , left(NULL) , right(NULL) {}
};
void f(Node *root, vector<vector<int>> &ans, vector<int> row)
{
    if (root == NULL)
        return;
    row.push_back(root->data);
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(row);
        return;
    }
    f(root->left, ans, row);
    f(root->right, ans, row);
}
vector<vector<int>> Paths(Node *root)
{
    vector<vector<int>> ans;
    vector<int> row;
    f(root, ans, row);
    return ans;
}
int main()
{

    return 0;
}