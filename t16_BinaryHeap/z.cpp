#include <bits/stdc++.h>
using namespace std;

class maxHeap{
    
public:
    vector<int>arr;
    int left(int i) {return 2*i +1;}
    int right(int i) {return 2*i +2;}
    int parent(int i) {return (i-1)/2;}

    bool insert(int n);
    void maxHeapify(int i,int siz);
    void buildHeap();
};

bool maxHeap::insert(int n){
    arr.push_back(n);
    int curr_size = arr.size();
    for(int i = curr_size; parent(i)>=0 && arr[i]>arr[parent(i)]; i=parent(i)) {
        swap(arr[i], arr[parent(i)]);
    }
    return true;
}

void maxHeap::maxHeapify(int i, int siz){
    if(i<0 or i==siz){
        return;
    }
    int maxi = i;
    int li = left(i);
    int ri = right(i);
    if(li<siz and arr[maxi]<arr[li]){
        maxi = li;
    }
    if(ri<siz and arr[maxi]<arr[ri]){
        maxi = ri;
    }

    if(maxi != i){
        swap(arr[i], arr[maxi]);
        maxHeap::maxHeapify(maxi, siz);
    }
}

void maxHeap::buildHeap(){
    // Start with the bottom-most right-most internal node and maxHeapify
    int i = parent(arr.size()-1);
    for(; i>=0; i--){
        maxHeap::maxHeapify(i, arr.size());
    }
}

void heapSort(maxHeap &hp){
    hp.buildHeap();
    int n = hp.arr.size();
    for(int i=n-1; i>=1; i--){
        swap(hp.arr[0], hp.arr[i]);
        hp.maxHeapify(0, i);
    }
}

int main(){
    maxHeap hp;
    hp.arr = {3,60,0,99,100,40,50};
    hp.buildHeap();
    //heapSort(hp);
    for(int it : hp.arr){
        cout << it << ",";
    }
}
