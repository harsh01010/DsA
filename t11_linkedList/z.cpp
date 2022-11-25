#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define mac temp.arr[temp.top]

  struct stackk{
          int top;
          int size;
          int* arr;
          stackk(int s)
          {
                  top= -1;
                  size =s;
                  arr = new int[size];

          }
          bool isEmt()
          {
                  return top == -1;
          }
          bool isFull()
          {
                  if(top == size-1) return true;
                  else return false;
          }
          void push(int x)
          {
                  if(isFull()){ cout<<"ovf\n"; return;}

                  top++;
                  arr[top] = x;   
          }
          int pop()
          {
                if(isEmt()) {cout<<"udf\n"; return -1;}
               
                 int val = arr[top];
                 top--;
                 return val;

          }
          void display()
          {
                  for(int i = size-1;i>=0;i--)
                  {
                          cout<<arr[i]<<" ";
                  }
                  cout<<"\n";
          }
  };

  struct stackk sortstk(struct stackk &s , int n)
  {
       struct stackk temp(n);
         while(!s.isEmt())
         {
                  int a = s.pop();
                  while(!temp.isEmt() && mac >a)
                  {
                          int c = temp.pop();
                          s.push(c);

                  }
                  temp.push(a);
         }
         return temp;

  }
  
int main()
{
        #ifndef ONLINE_JUDGE
        freopen("i_p.txt", "r", stdin);
        freopen("o_p.txt", "w", stdout);
        #endif

        int n; cin>>n;
         
          struct stackk stk(n);
          for(int i=0;i<n;i++)
          {
                  int x; cin>>x;
                  stk.push(x);
          }
          stk.display();
          struct stackk skk = sortstk(stk,n);
          skk.display();
          
   
      
   
        

        



return 0;
}