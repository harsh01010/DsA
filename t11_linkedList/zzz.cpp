#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct n{
    int data;
    n* next;
    n* rand;
    n(int x)
    {
      data = x;
      next = NULL;
    }
};

n* copyList(n* head)
{
      unordered_map<n* , n*>ump;
     n* copy = new n(head->data);
      
     n* curr = head;

       ump[curr]= copy;
       curr = curr->next;
     
     n* copyHead = copy;
       
       while(curr != NULL)
       {
           copy->next=  new n(curr->data);
           copy = copy->next;
           ump[curr] = copy;
           curr = curr->next;   
       }

       curr = head;
       n *copyCurr = copyHead;
       while(curr != NULL)
       {
           copyHead->rand = ump[curr->rand];
           curr = curr->next;
           copyCurr = copyCurr->next;
       }
       return copyHead;

}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif
 
  



return 0;
}