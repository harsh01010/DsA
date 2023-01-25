#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

 /***************Simple Implementation********************************************************************************************************/
   
    class Deque{
      int size , cap;
      int *arr;
      Deque(int c)
      {
          cap = c;
          size = 0;
          arr = new int[c];
      }
     bool is_full(){
        return size ==cap;
     }
     bool is_empty()
     {
        return size == 0;
     }

     void insertFront(int x){
        if(is_full()){cout<<"no spcae to insert\n";return;}
        for(int i = size-1;i>=0;i--)
        {
             arr[i+1] = arr[i];
        }
        arr[0] = x;
        size++;
        cout<<"inserted\n";
     }

     void insertRear(int x)
     {
         if(is_full())
         {
             cout<<"no spcae to insert\n"; return;
         }
         arr[size-1] = x;
         size++;
         cout<<"inserted\n";
     }

    int getFront()
    {
         return is_empty()?-1:arr[0];
    }
    int getRear()
    {
         return is_empty()?-1:arr[size-1];
    }

    void deleteFront()
    {
          if(is_empty()){cout<<"empty\n"; return;}
          for(int i=0;i<size-1;i++)
          {
              arr[i] = arr[i+1];
              size--;
          }
          cout<<"deleted from fornt\n";
    }

     void deleteRear()
     {
          if(is_empty()){cout<<"empty\n";return;}
          size--;
          cout<<"deleted from rear\n";
     }

   };

   /*************************************Using circualr array********************************************************************************/

  class DQ{
     int *arr;
     int front , cap , size;
     DQ(int cap)
     {
         this->cap = cap;
         arr = new int[this->cap];
         size = front = 0;
     }

     bool isFull()
     { 
         return size == cap;
     }
     bool isEmpty()
     {
         return size == 0;
     }

     void insertFront(int x)
     {  if(isFull()){cout<<"no space\n";return;}
         int ind = (front-1+cap)%cap;
         arr[ind] = x;
         size++;
     }
     void deleteFront()
     {
         if(isEmpty()){cout<<"empty\n";return;}
         front = (front+1)%cap;
         size--;
     }
     void insertRear(int x)
     {
          if(isFull()) {cout<<"no space\n";return;}
          int ind = (front+size)%cap; // it is rear + 1.
          arr[ind] = x;
          size++;
     }
     void deleteRear()
     {
          if(isEmpty()){cout<<"empty\n";return;}
           size--;
     }
  };





int main()
{
    

    



return 0;
}