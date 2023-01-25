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
 //
 /*
   // intersection point of two linked list

   1 -> 2 -> 3 -> 4 ->5 ->6 ->7->8
                      ^
                      |
                      6
    find the length of both  the linked list(l1 , l2)
     x = abs(l1-l2)

     traverse head->next x times in the bigger list
     now traverse both lists untill encountering the common node.
    
 */


int point(node* h1 , node* h2)
{
      int c1 = 0  , c2 = 0;
      node* curr1 = h1 , *curr2 = h2;  

      // finding lengths of both lists
      while(curr1 != NULL)
      {
          c1++;
          curr1=curr1->next;
      }
      while(curr2 != NULL)
      {
         c2++;
         curr2 = curr2->next;
      }
/******************************************************************************************/

      int diff = abs(c1-c2);
    // moving ahead in the bigger  list
     if(c1 > c2)
        {
             for(int i=0;i<diff;i++) h1 = h1->next;
        }
    else
      {
         for(int i=0;i<diff;i++) h2 = h2->next;
      }

/*********************************************************************************************/
// traversing till equal nodes encountered

  while(h1!=h2)
  {
      h1 = h1->next;
      h2 = h2->next;
  }
  return h1->data;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    



return 0;
}