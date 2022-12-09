#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

class TwoStacks{
      private:
       int *arr;
       int top1 , top2 , cap;
       public:
        TwoStacks(int);
        bool push1(int);
        bool push2(int);
        int gettop1();
        int gettop2();
        int pop1();
        int pop2();
        int size1();
        int size2();
};

TwoStacks::TwoStacks(int cap)
{
       this->cap = cap;
       arr = new int[cap];
       top1 = -1;
       top2 = cap;
}

bool TwoStacks::push1(int n)
{
     if(top1 < top2-1)
     {
           top1++;
           arr[top1] = n;
           return true;
     }
     return false;
}
bool TwoStacks::push2(int n)
{
      if(top2-1 > top1)
      {
           top2--;
           arr[top2] = n;
           return true;
      }
      return false;
}

int TwoStacks::gettop1()
{
     if(top1 == -1) {cout<<"it  is empty "; return -1;}
     return arr[top1];
}
int TwoStacks::gettop2()
{
      if(top2 == cap) {cout<<"it is empty"; return -1;}
      return arr[top2];
}

int TwoStacks::size1()
{
      top1+1;
}

int TwoStacks::size2()
{
     return cap-top2;
}

int TwoStacks::pop1()
{
      if(top1 == -1){cout<<"underflow"; return -1;}
       int x = arr[top1];
       top1--;
       return x;
}
int TwoStacks::pop2()
{
       if(top2 == cap){ cout<<"underlow"; return -1;}
       int x = arr[top2];
       top2++;
       return x;
}



int main()
{
     



return 0;
}