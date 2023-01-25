#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// ceiling on left side in an array
int main()
{

int n; cin>>n;
int arr[n];
for(auto &it:arr) cin>>it;
vector<int>ans;
ans.push_back(-1);
set<int>s;
s.insert(arr[0]);
for(int i=1;i<n;i++)
{
    set<int>::iterator it= s.lower_bound(arr[i]);
    if(it!=s.end()) ans.push_back(*it);
    else ans.push_back(-1);

    s.insert(arr[i]);
}

for(auto it:ans) cout<<it<<" ";cout<<"\n";



return 0;
}