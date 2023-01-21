/*

Comparison:-
                            Array           Array         Linked List          BST               HashTable  
                            (unsorted)      (sorted)                           (Balanced)                    

Search ->                   O(N)             O(logN)        O(n)                O(logN)              O(1)                                                                                                       


Insert ->                   O(1)            O(N)            O(1)                O(logN)             O(1)                                                                                 


Delete ->                  O(N)             O(N)           O(n)                O(logN)             O(1)                                                                                  


Find closest ->            O(N)             O(logN)       O(n)                O(logN)             O(n)                                                                                            


Sorted Traversal ->       O(NlogN)           O(N)         O(nlogn)             O(N)              O(nlogn)
                                                        O(n) if sorted                                                                                                                             

note for BST logn complexity  for balanced tree , for unbalanced it is O(H), where H is height of BST.
Introduction:-
1. For every node,keys in left side are smaller and keys in right side are greater.
2. All keys are typically considered as distinct.
3. Like linked list,it is a linked data structure.

                            50
                        /       \
                    30            70
                /      \        /    \
            10          40     60     80

4. it is implemented in c++ as map , set,multimap and multiset. And in java as TreeSet and TreeMap.


BST operations:
    the structure of BST is same as a binary tree.
    create a BST
    insert 20,15,30,40,50,12,18,35,80,7.

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