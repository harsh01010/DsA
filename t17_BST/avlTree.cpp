#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees cannot be more than one for all nodes.

Since the AVL tree is balanced, the height is O(Logn). So time complexity of AVL insert , delete , search is O(Logn)

height of avl tree is given by , h = 1.44log(n) + c
*/


struct node
{
    int data;
    node *left, *right;
    int height;
    node(int x)
    {
        data = x;
        left = right = NULL;
        height = 1;
    }
};
int getHeight(node *root)
{
    if (root == NULL)
        return 0;
    else
        return root->height;
}
int getBalanceFactor(node *root)
{
    if (root == NULL)
        return 0;
    else
        return getHeight(root->left) - getHeight(root->right);
}
/*
                                    x                               y
                                  / \     Right Rotation          /  \
                                 y   c   - - - - - - - >         a    x
                                / \       < - - - - - - -            / \
                               a  b     Left Rotation                b  c
*/
node *rightRotate(node *x)
{
    node *y = x->left;
    node *b = y->right;

    y->right = x;
    x->left = b;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    return y; // returns new root  after right rotation
}

node *leftRotate(node *y)
{
    node *x = y->right;
    node *b = x->left;

    x->left = y;
    y->right = b;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    return x; // returns new root after left rotation
}

node *insert(node *root, int x)
{
    if (root == NULL)
        return new node(x);
    if (root->data < x)
        root->right = insert(root->right, x);
    if (root->data > x)
        root->left = insert(root->left, x);
    // else return root; // it is present already

    root->height = 1 + max(getHeight(root->left), getHeight(root->right)); // don't write root->height+1 , it will increase heights of all the nodes , but we only have to increase of height of that node which are ancestors of inserted node.
    // now we need to perform rotations if |balance factor| is greater than or equals to 2
    int balFac = getBalanceFactor(root);
    /* LL */
    if (balFac > 1 && x < root->left->data) // it means there are more nodes on left side && the data to be inserted is even smaller than data of root->left , Hence we need LL Rotation
    {
        root = rightRotate(root);
    }
    /* RR */
    else if (balFac < -1 && x > root->right->data) // it means there are more nodes on right  side && the data  inserted is even greater than data of root->right , Hence we need RR rotation
    {
        root = leftRotate(root);
    }
    /* LR */
    else if (balFac > 1 && x > root->left->data) // this case indicates tree height is greater on left side of and the data inserted is greater than data of root->left , so it represents LR rotation
    {
        root->left = leftRotate(root->left);
        root = rightRotate(root);
    }
    /* RL */
    else if (balFac < -1 && x < root->right->data) // RL rotation
    {
        root->right = rightRotate(root->right);
        root = leftRotate(root);
    }

    return root;
}
// coming soon
node*deletee(node*root,int x)
{
    return root;
}

void traverseLevels(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    int c = 1;
    while (!q.empty())
    {
        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
        cout << "LEVEL NUMBER -> " << c << " STARTED\n";
        int x = q.size();
        for (int i = 0; i < x; i++)
        {
            node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        c++;
        cout << "\nLEVEL ENDED\n";
        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    }
}

int main()
{

    node *root = NULL;
    root = insert(root, 14);
    root = insert(root, 17);
    root = insert(root, 11);
    root = insert(root, 7);
    root = insert(root, 53);
    root = insert(root, 4);
    root = insert(root, 13);
    root = insert(root, 12);
    root = insert(root, 8);
    root = insert(root, 60);
    root = insert(root, 19);
    root = insert(root, 16);
    root = insert(root, 20);
    // root = insert(root, 366);
    // root = insert(root, 359);
    // root = insert(root, 344);
    // root = insert(root, 496);
    // root = insert(root, 270);
    // root = insert(root, 213);
    if (root == NULL)
        cout << "wasted\n";
    traverseLevels(root);
    return 0;
}

/*
create avl tree with , 14 17 11 7 53 4 13 12 8 60 19 16 20

                                    14

                                    14
                                      \
                                       17

                                    14
                                   /  \
                                  11   17


                                    14
                                   /  \
                                  11   17
                                 /
                                7


                                    14
                                   /  \
                                  11   17
                                 /      \
                                7        53


                                    14
                                   /  \
                                  11   17  --> balance factor of 11 becomes 2
                           L     /      \
                                7        53
                           L   /
                              4


                                   |
                                   | LL rotation , or right rotation
                                   |

                                   14
                                   /  \
                                  7    17
                                 / \     \
                                4   11    53


                                   14
                                   /  \
                                  7    17
                                 / \     \
                                4   11    53
                                      \
                                       13


                                    14
                                   /  \
                                  7    17
                                 / \     \
                                4   11    53   --> balance factor of 11 becomes -2
                                      \
                                       13
                                       /
                                      12

                         performing RL rotation at 11
                                    14
                                   /  \
                                  7    17
                                 / \     \
                                4   11    53
                                      \
                                       12
                                        \        <--- first right rotation of right of 11
                                        13


                                    14
                                   /  \
                                  7    17
                                 / \     \
                                4   12    53     <-- then left rotation at 11
                                    /  \
                                   11   13

                            RL rotation DONE
                        _________________________

                                    14
                                   /  \
                                  7    17
                                 /  \    \
                                4    12   53
                                 \   /  \
                                 8  11   13


                                    14
                                   /  \
                                  7    17
                                 /  \    \
                                4    12   53
                                 \   /  \
                                 8  11   13  -
 */