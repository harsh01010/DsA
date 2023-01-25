#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

 struct node{
      int x;
      node* next;
      node(int d)
      {
          x = d;
          next = NULL;
      }
 };


 class StK{
       private:
        node* head;
        int size;
        public:

        StK(void);
        void push(int);
        int pop(void);
        int peek(void);
        int sizeFind(void);
        bool isEmpty(void);

 };

 StK::StK()
 {
      head= NULL;
      size=0;
 }
 void StK::push(int x)
 {
      node *curr = new node(x);
      curr->next = head;
      head = curr;
      size++;
 }

 int StK::pop()
 {
       if(head == NULL)
       {
         cout<<"Under flow\n";
         return -1;
       }
       int x = head->x;
       node* temp = head;
       head = head->next;
       delete temp;
       return x;
 }
 int StK::peek()
 {
      if(head == NULL)
      {
          cout<<"Under flow\n";
          return -1;
      }
      return head->x;
 }
 int StK::sizeFind()
 {
      return size;
 }
 bool StK::isEmpty()
 {
      return size == 0;
 }

int main()
{
   
    StK st;
    st.push(23);
    st.push(55);
    st.push(88);
    cout<<st.peek()<<"\n";
    st.pop();
    cout<<st.peek()<<"\n";
    cout<<st.isEmpty()<<"\n";
    st.pop();



return 0;
}