#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* step 1 : build maxheap
    
    step 2: repeatedly swap root with last node,reduce heap size by one and heapify.
*/

void  maxHeapify(int arr[],int n,int i)
{
    int li = 2*i + 1;
    int ri = 2*i + 2;
    int largest = i;
    if(li<n && arr[li] > arr[largest])
    largest = li;
    if(ri<n && arr[ri] > arr[largest])
    largest = ri;
    if(largest != i){
    swap(arr[i],arr[largest]);

    maxHeapify(arr,n,largest);
    }
}
void buildMaxheap(int arr[],int n )
{
    for(int i = (n-1-1)/2;i>=0;i--)
    maxHeapify(arr,n,i);
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int size = n;
    buildMaxheap(arr,n);
    
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);
    }
    

    for(auto it:arr) cout<<it<<" ";
    



return 0;
}