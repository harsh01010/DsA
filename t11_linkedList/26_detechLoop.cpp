#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct node{
       int data;
       node*next;
       node(int x)
       {
             data = x;
             next = NULL;
       }
};

// LOOP -> next of last loop points to an node insted of NULL

//naive:
/*
 check one by one wheather two node points to same node or not
 O(n^2)
*/

/*
 O(n) soln
  struct node{
       int data;
       node* next;
       bool visited;
       node(int x)
       {
             data = d;
             next = NULL;
             visited = false; // if we find next of any node already visited as true , then tere exist a loop
       }
  }
// but this solution required modificatiion of structure of the linked list node
*/


/*

 modification of linked list pointer/refrences

 keep traversing the lkd , while traversing change the next of node to a dummy node
 if next of curr node already points to dummy node then return true;
*/

// modification of linked  list approach

bool isLoop(node*head)
{
       node* dummy = new node(0);
       node* curr = head;

       while(curr != NULL)
       {
             if(curr->next == dummy) return true;
             else if(curr->next == NULL) return false;
             
             node* temp = curr->next;
             curr->next = dummy;
             curr = temp;
       }
       return false;
}

/*
    store the curr->next and a boolean value as key value pair
*/

bool is_Loop(node*head)
{
        unordered_map<node* , bool> presentbefore;

        while(head != NULL)
        {
             if(presentbefore[head->next] == true) return false;
              presentbefore[head->next] = true;
              head = head->next;
        }

        return false;
}

/*
 floyd cycle detection algorithm
*/
bool is__loop(node*head)
{     if(head == NULL ) return false;
        node *fast = head , *slow = head;
         while(fast != NULL and fast->next != NULL)
         {
              slow = slow->next;
              fast = fast->next->next;
            if(fast == slow) return true;
         }
         return false;
}
int main()

{
      
      



return 0;
}