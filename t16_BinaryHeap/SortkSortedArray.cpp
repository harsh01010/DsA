#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
sort k sorted array:
an element at index i will be present between int indexes i-k to i+k in the sorted array
*/
/*
approach 1:
simply sort -> O(nlong(n))
approch 2 ->
build min heap upto k elements of the array , take top and insert next element from the array.
t.c -> O(k) + O((n-k) * log(k))
s.c -> O(k)
*/


void KSort(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<=k;i++)
    pq.push(arr[i]);

    int ind = 0;
    for(int i=k+1;i<n;i++)
    {
        arr[ind++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty())
    {
        arr[ind++]  = pq.top();
        pq.pop();
    }

}

int main()
{

int n; cin>>n;
int k; cin>>k;
int arr[n]; for(auto &it:arr) cin>>it;
KSort(arr,n,k);

for(auto it:arr) cout<<it<<" ";


    



return 0;
}