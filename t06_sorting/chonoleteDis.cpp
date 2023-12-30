 #include<bits/stdc++.h>
 typedef long long int ll;
 using namespace std;
 
 int main()
 {
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif
 
      int n;
        cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i]; sort(arr,arr+n);
        int m; cin>>m;
         int ans = arr[m-1] - arr[0];
         for(int i=0;i+m-1<n;i++)
           ans = min(ans , arr[i+m-1] - arr[i]);

           cout<<ans<<" ";
 
 
 
 return 0;
 }