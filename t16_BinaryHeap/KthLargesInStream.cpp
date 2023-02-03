#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// kth largest in a stream

void kthLargest(int arr[], int n, int k)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        int i=0;
        for(;i<k-1;i++){
        pq.push(arr[i]);
        cout<<"-1 ";
        }
        pq.push(arr[i++]);
        cout<<pq.top()<<" ";
        for(;i<n;i++)
        {
            if(arr[i] > pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
            cout<<pq.top()<<" ";
        }
    }

int main()
{


    



return 0;
}