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
    void traverse();
    void Minhepify(int);
    void buildHeap();
};
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

    // this function has time complexity O(n) not o(nlogn) because of the fact that complete binary tree has height ciel(n/2^(n+1))
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