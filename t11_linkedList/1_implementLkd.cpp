#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct NODE
{
     int data;
     NODE* next;

     NODE(int x)
     {
          data = x;
          next = NULL;
     }
};


int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

    NODE* head = new NODE(20);
    NODE* temp1 = new NODE(30);
    NODE* temp2 = new NODE(40);

    head->next = temp1;
    temp1->next = temp2;


   /* short implementation
  NODE* head = new NODE(10);
   head->next = new NODE(30);
   head->next->next = new NODE(40);
  */




return 0;
}