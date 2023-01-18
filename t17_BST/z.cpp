#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
    int data;
    node*right;
    node*left;
    node(int x)
    {
        data = x;
        right = left = nullptr;
    }
};

void traverse(node*root)
{
    if(!root)return;
    traverse(root->left);
    cout<<root->data<<" ";
    traverse(root->right);
}

/*
delete operation:
we also have to take care of the situation when we delete non leaf node and other nodes associated to that needed to be readjusted in the tree such that tree follow the properties of the binary search tree.

        50
       /   \ 
      20    70
      \     /  \ 
       40   60  80

let's assume we have to delete 50, 
then we will be having to options of our root, 
1.closest higher value(difference wise) -> it is inorder sucessor(next node that comes next in inorder traversal)
2.closest lower value(difference wise)
so, we can choose 40 or 60 at the place of 50.
  
  hence we can get,
            40                          60   
           /   \                       /   \ 
          20     70             OR     20   70 
                /  \                   \      \ 
                60   80                 40     80

*/
int main()
{

node*root = new node(20);
root->left = new node(15);
root->right=new node(30);
root->left->left=new node(12);
root->left->right=new node(18);
root->right->right=new node(40);
root->left->left->left=new node(7);
root->right->right->left=new node(35);
root->right->right->right=new  node(50);
root->right->right->right->right=new  node(80);
/*
                        20
                       /   \ 
                      15    30
                    /  \       \
                  12   18       40
                  /             /  \ 
                 7             35   50
                                      \ 
                                       80
*/

traverse(root);cout<<"\n";
root=insertRec(root,54);
traverse(root);cout<<"\n";
root=insertRec(root,19+1);
traverse(root);cout<<"\n";
root=insertIter(root,100);
traverse(root);cout<<"\n";
root=insertIter(root,7);
traverse(root);cout<<"\n";




return 0;
}
