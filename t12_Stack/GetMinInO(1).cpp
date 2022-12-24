#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

class stackPositive{
   private:
     stack<int>stk;
     int minEle;
   public:
     void push(int);
     void popp();
     int getMin();
};

// method 1 : only when all the elements are +ve , idea is to store previous
//minimum by subtraacting form current minimum
/*
void stackPositive::push(int x)
{
    if(stk.empty())
      {
           minEle = x;
           stk.push(x);
      }

      else if(x <= minEle)
      {  
          stk.push(x-minEle);
          minEle = x;
      }
      else 
         stk.push(x); 
}
void stackPositive::pop()
{
       if(stk.top() <= 0)
       {
           minEle = minEle-stk.top();
       }
       stk.pop();
}
int stackPositive::getMin()
{
     return minEle;
}
*/


// method 2 : works for positive and negative numbers both
// use 2*x - min , in the previous method at the place of x - min.

void stackPositive::push(int x)
{
    if(stk.empty())
    {
         stk.push(x);
          minEle = x;
    }
    else if(x <= minEle) // not x <= stk.top();
    {
          stk.push(2*x - minEle); // this is how we will sotre the element which is smaller than the minEle , so that we can handle 2nd min , 3rd min... while poping form stack
          minEle = x;
    }
    else stk.push(x);
}
void stackPositive::popp()
{
       int x = stk.top();
       stk.pop();
       if(x <= minEle)
       {
            int res = minEle; // if we have to return the top value while poping then return this value
             minEle = 2*minEle - x;
       }
}
int stackPositive::getMin()
{
     return minEle;
}



int main()
{
     char opt = 'y';
      stackPositive stk;
     do{ 
      cout<<"\t\t\tchoose any operation:=\n\t\t\t(a).Push\n\t\t\t(b).Pop\n\t\t\t(c).Get Minimum\n";
       char op = getchar();
       if(op == 'a' or  op == 'A' )
       {
          int x; cout<<"\t\t\tEnter a number  to be pushed in the stack\n"; cin>>x;
          stk.push(x);
       }
       else if(op == 'b' or op == 'B')
       {
            stk.popp();
            cout<<"\t\t\tPoped successfully\n";
       }
       else if(op == 'c' or  op == 'C')
       {
            int m = stk.getMin();
            cout<<"\t\t\tThe minimum element in the stack is "<<m<<"\n";
       }
       
       cout<<"\t\t\twant to continue?[y/n]\n";
       cin>>opt;
       cin.ignore();
     }while(opt == 'y');
   



return 0;
}