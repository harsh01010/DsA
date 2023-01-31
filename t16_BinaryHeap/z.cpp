#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// class for binary heap
class MinHeap
{
public:
    int *arr;
    int size;
    int capacity;
    MinHeap(int c) : arr(new int[c]), size(0), capacity(c) {}

    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }
    int parent(int i) { return (i - 1) / 2; }
    bool insert(int);
    void traverse();
    void Minhepify(int);
    int extract();
    void decreaseKey(int,int);
    void deleteKey(int);
    void buildHeap();
};

bool MinHeap ::insert(int x)
{
    if (size > capacity)
        return false;
    if (size == 0)
    {
        arr[size++] = x;
        return true;
    }
    int i = size;
    arr[size++] = x;
    while (i >= 1 && arr[parent(i)] > arr[i])
    {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
    return true;
}
void MinHeap::traverse()
{
    for (int it = 0; it < size; it++)
        cout << arr[it] << " ";
    cout << "\n";
}
void MinHeap::Minhepify(int i){
    int li = left(i);
    int ri = right(i);
    int smallest = i;
    if (li < size && arr[smallest] > arr[li])
        smallest = li;
    if (ri < size && arr[smallest] > arr[ri])
        smallest = ri;
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        Minhepify(smallest);
    }
}
int MinHeap::extract(void)
{
    if(size==0) return INT_MIN;
    if(size==1){size--;return arr[0];}
    swap(arr[0],arr[size-1]);
    size--;
    Minhepify(0);
    return arr[size];
}

void MinHeap::decreaseKey(int i,int x)
{
    if(i<size)
    {
        arr[i] = x;
        while(i>=1 && arr[i] < arr[parent(i)])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
}

void MinHeap::deleteKey(int i)
{
    if(i<size){
        decreaseKey(i,INT_MIN);
        extract();
    }

}
/*
build heap:

start with bottom most right most node -> that is parent  of last node -> parent(size-1) -> ((size-1)-1 )/2 -> (size-2)/2
and hepify each index upto 0

why we are starting form bottom most right most node -> because we are assured that at the lowest level we need not to do any changes 
*/
void MinHeap::buildHeap()
{
    for(int i = (size-1-1)/2 ; i>=0;i--)
        Minhepify(i);
}




int main()
{
    MinHeap hp(10);
    int n; cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>hp.arr[i];
        hp.size++;
    }
    hp.traverse();
    hp.buildHeap();
    hp.traverse();

    return 0;
}