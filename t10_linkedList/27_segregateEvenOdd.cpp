#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct node{
       int data;
       node* next;
       node(int x)
       {
             data = x;
              next = NULL;
       }
};


node *segregate(node*head)
{
        node *os = NULL , *oE = NULL , *es  = NULL, *eE  = NULL, *curr = head;
        while(curr != NULL)
        {
               if( ( (curr->data) % 2) != 0)
                    {
                        if(os == NULL and oE == NULL)
                        {
                               os = oE = curr;
                        }
                        else{
                              oE->next = curr;
                              oE = curr;
                        }
                    }

                  else
                    {      
                        if(es == NULL and eE == NULL)
                        {
                               es = eE = curr;
                        }
                        else{
                               eE->next = curr;
                               eE = curr;
                        }

                    }
                    curr = curr->next;
        
         }

 // if there is no odd element
 if(os == NULL){
   eE->next = NULL;
   return es;
 }
 // if ther is no even element
 if(es == NULL)
 {
        oE->next = NULL;
        return os;
 }
 
 // linking with each other
    oE->next = NULL;
    eE->next = os;
 // returning the  new head
 return es;

}

void display(node*head)
{
        node*curr = head;
        while(curr != NULL)
        {
              cout<<curr->data<<" ";
              curr=curr->next;
        }
        cout<<"\n";
}


int main()
{
      #ifndef ONLINE_JUDGE
      freopen("i_p.txt", "r", stdin);
      freopen("o_p.txt", "w", stdout);
      #endif  

  node*head = new node(2);
  head->next = new node(5);
 head->next->next = new node(3);
 head->next->next = new node(8);
  head->next->next->next = new node(9);
  head->next->next->next->next = new node(77);
  head->next->next->next->next->next= new node(100);
   display(head);
  head = segregate(head);
  display(head);
      



return 0;
}