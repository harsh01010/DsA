/*


  TREE TRAVERSAL

                         10
                        /   \ 
                       20   30 
                      / \    
                     40 50

 Breadth First(or level order) : each level top to bottom , left to  right
   
   10 20 30 40 50

Depth First:
 we go to one side we finish or traverse it completly then we move to other side.
 

          Traverse root
         /
 recursive - Traverse Left Subtree
         \
           Traverse Right Subtree

there can be many ways to do above recursive task , eg. first traverse the left subtree then root then right subtree , e.t.c
            ( 3! = 6 ways )

out of these 6 ways three are most popular:
 in these 3 permutaions we first visit left subtree , before right.
  these 3 are:

         10
         / \
        20  30
-> Inorder ( Left Root Right )        Left= Left Subtree 
                                      Right = Right subtree
             20 10 30                         
-> Preorder (Root Left Right)
         10 20 30

-> Postorder (Left Right Root)
    20 30 10 

   
e.g.
                                 [10]
                           /               \
                       /[20]    \        /  [30]   \ 
                      / /   \    \      /      \    \
                     /[40] /[50] \\    /        [60] \ 
                    /     /  / \  \\  /---------------\
                   /     / [70][80]\\
                  /     /-----------\\
                 /--------------------\

   Inorder: 40 20 70 50 80 10 30 60
   Preorder: 10 20 40 50 70 80 30 60
   Postorder:40 70 80 50 20 60 30 10


*/