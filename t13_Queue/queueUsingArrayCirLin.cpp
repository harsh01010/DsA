

/****SIMPLE************************************************************************************************/
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Q{
      int size , cap;
      int*arr;
      public:
      Q(int x)
      {
          cap = x;
          size = 0;
          arr = new int[x];
      } 
      bool isFull();
      bool isEmpty();
      void enque(int);
      void dequeue();
      void printQ();




};

bool  Q::isFull()
{
     return size == cap;
}
bool  Q::isEmpty()
{
     return size == 0;
}
void  Q::enque(int x)
{
    if(isFull()){
          cout<<"Queue is Full\n"; return;
    }
    arr[size] = x;
    size++;
}
void Q:: dequeue()
{
     if(isEmpty()){cout<<"Queue is Empty\n";return;}
     for(int i = 1;i<size;i++)
     {
          arr[i-1] = arr[i];
     }
}
void Q:: printQ()
{
       if(isEmpty()){cout<<"Queue is Empty\n";return;}
       for(int i=0;i<size;i++)
       {
          cout<<arr[i]<<" ";
       }
       cout<<"\n";
       size--;
}


/**using Circular Array*************************************************************************************************************************************************/
class que{
     public:
       int front;
      // int rear;
       int size; // we will not take rear variable because we have size variable
       int capacity;
       int *arr;

       que(int capacity);
       void enque(int x);
       bool is_full();
       bool is_empty();
        void dque();
       void displayQue();
};

bool que::is_empty()
{
       return size==0;
}
bool que::is_full()
{
     return size == capacity;
}
void que::enque(int x)
{
       if(is_full()) {cout<<"queue is full! please wait\n"; return;}

      int r = (front+size)%capacity;
       arr[r] = x;
       cout<<"Placed in the queue\n";
       size++;
}

void que::dque()
{
       if(is_empty()){
          cout<<"queue is empty! please wait\n"; return;
       }
       int x = arr[front];
       front = (++front)%capacity;
       size--;
       cout<<"deleted from queue\n";
       
}

void que::displayQue()
{       int x = 0;
       for(int i = front; x<size; i = (i+1)%capacity)
       {
             cout<<arr[i]<<" ";
             x++;
       }
       cout<<"\n";
       
}

que::que(int capacity)
{    
      this->capacity = capacity;
      size = 0;
      front = 0;
      arr = new int[capacity];
}


int main()
{
//    Q que(10);
//    que.enque(10);
//    que.enque(20);
//    que.enque(30);
//    que.enque(50);
//    que.printQ();
//    que.dequeue();
//    que.dequeue();
//    que.printQ();
   
   que q(5);
   q.enque(10);
   //cout<<q.front<<"\n";
   q.enque(44);
   //cout<<q.front<<"\n";
   q.enque(0);
   //cout<<q.front<<"\n";
  //cout<<q.capacity<<" "<<q.size<<" "<<q.is_full()<<" "<<q.is_empty();
  q.displayQue();
  q.dque();
  cout<<q.capacity<<" "<<q.size<<" "<<q.front<<"\n";
  q.displayQue();
    



return 0;
}
  