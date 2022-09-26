#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

        int n , s; cin>>n>>s;
        int arr[n]; for(auto &it:arr) cin>>it;

        unordered_set<int>st;
        int pre = 0;
            int res=0;
        for(int i=0;i<n;i++)
        {
              pre +=arr[i];
              if(pre==s) res++;
              if(st.find(pre-s) != st.end()) res++;
              st.insert(pre);
        }

        cout<<res<<"\n";



return 0;
}