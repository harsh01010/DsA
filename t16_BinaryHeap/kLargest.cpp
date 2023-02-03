#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int> klargest(int arr[],int n,int k)
{
    priority_queue<int>p{arr,arr+n};
    vector<int>res;
    for(int i=0;i<k;i++)
    {
        res.push_back(p.top());
        p.pop();
    }
    return res;
}

/*
method 2:
build a min heap form k elements of the array.  O(k)
now start traversing the array from the k+1th item  o((n-k)logk)
    if it is smaller than top of min heap , ignore
    if it greater than top of min heap , then pop the top and push this element

at the end we will be having k largest elements of the array. O(k)

t.c : O(k+(n-k)logk  )
*/

void klargest2(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>p{arr,arr+k};

    for(int i=k;i<n;i++)
    {
        if(p.top()<arr[i])
        {
            p.pop();
            p.push(arr[i]);
        }
    }

    while(!p.empty())
    {cout<<p.top()<<" ";p.pop();}
}
int main()
{

    int n; int k;
    cin>>n>>k;
    int arr[n]; for(auto &it:arr) cin>>it;
    klargest2(arr,n,k);



return 0;
}