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
//MinHepify -> if there is one invalid element(at index i) in heap that is it's value is greater than it's decendants then we need MinHepify to fix this.
void MinHeap::Minhepify(int i)
{
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
int main()
{
    MinHeap hp(10);
    hp.insert(10);
    hp.insert(20);
    hp.insert(15);
    hp.insert(40);
    hp.insert(50);
    hp.insert(25);
    hp.insert(45);
    hp.insert(12);
    hp.traverse();
    hp.Minhepify(0);
    hp.traverse();

    return 0;
}