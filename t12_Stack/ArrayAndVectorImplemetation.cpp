#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

 // array implementation of stack
  //a. using static array
 class StK{
    private:
      int cap;
      int top;
      int *arr;
    public:
       StK(int);
       void push(int);
       int pop();
       int peek();
       bool isEmpty();
 };
  
  // contructor
 StK::StK(int cap)
 {
     this->cap =cap;
     top = -1;
     arr = new int[cap];
 }

  //push in the stack
void StK::push(int x)
{
     if(top == cap-1) 
      {
         cout<<"\nOVERFLOW\n";
         return;
      }

      top++;
      arr[top] = x;
}

  //pop from the stack
int StK::pop()
{
      if(top == -1)
      { 
         cout<<"UNDERFLOW\n";
          return -1;
      }
      int x = arr[top];
      top--;
      return x;
}

//get the top
int StK::peek()
{
     if(top == -1)
     {
          cout<<"UNDERFLOW\n";
          return -1;
     }
     return arr[top];
}

//wheater stack is empty
bool StK::isEmpty()
{
     return top == -1;
}


//b. using vector
class stk{
     vector<int>V;
     void push(int x)
     {
          V.push_back(x);
     }
     int pop(void)
     {
         if(V.size() == 0) 
         {
             cout<<"Underflow\n"; return -1;
         }
         int x = V.back();
         V.pop_back();
     }
     int peek(void)
     {
         if(V.size() == 0)
         {
              cout<<"Underflow\n"; return -1;
              return V.back();
         }
     }
     bool isempty()
     {
          return V.size() == 0;
     }
};

int main()
{
    StK mem(4);
    mem.push(23);
    cout<<mem.peek();cout<<"\n";
    mem.pop();
    cout<<mem.peek();



return 0;
}