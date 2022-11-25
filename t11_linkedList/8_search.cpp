#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct NODE
{
        int val;
        NODE* nextptr;
        NODE(int x)
        {
               val = x;
               nextptr = NULL;
        }
};

void insertVal(NODE* head , int x)
{
         NODE* newnode = new NODE(x);
         while(1)
         {
              if(head -> nextptr == NULL)
              {
                   head -> nextptr = newnode;
                   return;
              }

              head = head->nextptr;
         }
}
int  search(NODE* head , int x)
{      int i = 1;
        while(head != NULL)
        {
              if(head->val == x) return i;
              head = head->nextptr;
              i++;
        }
        return -1;
}

int serRec(NODE* head , int x , int pos = 1)
{
        if(head == NULL) return -1;
        else if(head ->val == x) return pos;
        return serRec(head->nextptr , x ,++pos);
        
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif
      int n; cin>>n;
      int x; cin>>x;
     NODE* list = new NODE(x);
      for(int i = 0 ;i <n-1;i++)
      {
           cin>>x;
           insertVal(list,x);
      }

      int y; cin>>y;
      cout<<y<<" is present at the "<<search(list , y)<<" position of the linked list\n";
      cout<<y<<" is present at the "<<serRec(list , y)<<" position of the linked list\n";




return 0;
}