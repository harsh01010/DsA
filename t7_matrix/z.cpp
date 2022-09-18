#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

      vector<int>arr{1,2,3,4,5,56};

      cout<<upper_bound(arr.begin(),arr.end(),0) - arr.begin();



return 0;
}