#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// k closest element
// use pq of pair<int,int> put abs(diff),arr[i] in the pair
void Kclosest(int arr[],int n,int x,int k)
{
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<k;i++)
    {
        pq.push({abs(x-arr[i]),arr[i]});
    }
    for(int i=k;i<n;i++)
    {
        if(pq.top().first > abs(x-arr[i]) )
        {
            pq.pop();
            pq.push({abs(x-arr[i]),arr[i]});
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top().second<<" ";
        pq.pop();
    }

//O(nlogk)

}
int main()
{
    int n ,x, k; cin>>n>>x>>k;
    int arr[n]; for(auto &it:arr) cin>>it;

     Kclosest(arr,n,x,k);



return 0;
}