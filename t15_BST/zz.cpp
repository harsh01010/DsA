#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
// Smaller on Right
void smallerOnright(int arr[],int n)
{
    set<int>st;
    for(int i=n-1;i>=0;i--)
    {
        st.insert(arr[i]);
        set<int>::iterator it = st.lower_bound(arr[i]);
        arr[i] = distance(st.begin(),it); // distance functions returns distance between two iterators
    }
}
int main()
{

int n; cin>>n;
int arr[n];
for(auto &it:arr) cin>>it;
smallerOnright(arr,n);
for(auto it:arr)cout<<it<<" ";



return 0;
}