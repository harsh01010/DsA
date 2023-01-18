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

/* Node at distance at K
   
   use preorder traversal to solve this one.

   keep track of all the nodes untill a leaf node is found , use vector to store them
   now if a leaf node is found print kth element in the vector from end.(dont store the node data in but store the node beacause two nodes may have same value)
   eg.
   1 2 3 4 , let after this we got 5 as leaf node
   hence we will put v.size()-kth  element in a hashset(becasue we have to handle duplicates also).
                         
                              10
                           /     \
                         30       20
                      /    \
                    40      70
                   /  \      \
                50     60     80
                               \
                                90
    let it be our tree, let k = 2
    untill we found first leaf node i.e 50 our vector will be look like:
            10 30 40 , now  its size is 3
            we will simply calculate 3-2(n-k) = 1 , it will be the Node at distance at K
            after we will follow pre order traversal ,
            note that when we will done with left and right of a node we will pop it from the vector.
            at the end we will return size of the hashset from our function.
*/

void f(node* root, vector<node*> &v, int k, set<node*> &ans){
    if(!root) return;
    if(!root->left  and !root->right){
        if(v.size() >= k){
            ans.insert(v[v.size() - k]);
        }
        return;
    }
    v.push_back(root);
    f(root->left, v, k, ans);
    f(root->right, v, k, ans);
    v.pop_back();
    return;
}
int NodeCountAtK(node* root, int k)
{
	
	vector<node*> v;
	set<node*> ans;
	f(root, v, k, ans);
    for(auto it:ans) cout<<it<<" ";
	return ans.size();
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
    
    int res = NodeCountAtK(root,2);
    cout<<res<<"\n";
    
    return 0;
}
