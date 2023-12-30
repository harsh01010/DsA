/*
priority_queue in c++

priority_queue container can be used to implement Heaps.

This container uses max heap internally , in java collections it is implemented using min heap

For implementing Max Heap:
priority_queue< type_of_data > name_of_heap;

For implementing Min Heap:
priority_queue< type, vector<type>, greater<type> > name_of_heap;



empty(): The empty() function returns whether the queue is empty.
size(): The size() function returns the size of the queue.
top(): This function returns a reference to the top most element of the queue.
push(): The push(g) function adds the element ‘g’ at the end of the queue.
pop(): The pop() function deletes the first element of the queue.
swap(): This function is used to swap the contents of one priority queue with another priority queue of same type and size.

push , pop -> O(log(n))
empty , size,top -> o(1)

if we create priority queue of pairs then elements will be ordered according to the first value of the pair

application of priority queue:
dijkstra algorithm
prim algorithm
huffman algorithm
heap sort
any other place where heap is used

*/



#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    priority_queue<int>maxHp;
    int arr[] = {44,23,1,55,8,4,9,0};

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        maxHp.push(arr[i]);
    }

    cout<<"this size of the priority queue is : "<<maxHp.size()<<"\n";
    cout<<"using max heap:\n";
    while(!maxHp.empty())
    {
        cout<<maxHp.top()<<" ";
        maxHp.pop();
    }

    // how to implement min heap using priority queue
    priority_queue<int,vector<int>,greater<int>>minHp;

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        minHp.push(arr[i]);
    }

    /*
    there is also one other way to build min heap:
    
    -> multiply array elements with -1.
    -> and build priority queue using max heap syntax
    -> when acessing top -> -pq.top()
    */
    cout<<"\nusing min heap:\n";

     while(!minHp.empty())
    {
        cout<<minHp.top()<<" ";
        minHp.pop();
    }

// we can also crete priority queue by passing array in constructor , and creating heap this way is better than inserting one by one becaue it calls buildheap function  which has t.c. O(n)


priority_queue<int>pq(arr,arr+sizeof(arr)/sizeof(int));

return 0;
}

/*
using priority queue for userdefined data type
struct person{
    int age;
    float ht;
    person(int a , float h)
    {
        age = a;
        ht = h;
    }
};

struct myCmp{
    // operator overloading
    bool operator()(person const &p1,person const  &p2)
    {
        p1.ht <p2.ht;
    }
};

priority_queue<person,vector<person>,myCmp>pq;
*/