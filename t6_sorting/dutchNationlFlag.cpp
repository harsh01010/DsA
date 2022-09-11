 // sort array having only three type of elements


 #include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
// three way partiton , or partition three pivots
void dutchNationalFlag(int arr[],int n,int p1,int p2,int p3)
{
       int lo = 0 , hi = n-1 , mid = 0;
       while(mid<=hi)
       {
            if(arr[lo]==p1)
            {
                 swap(arr[lo],arr[mid]);
                 lo++;mid++;
            }
            else if(arr[mid] == p2) mid++;
            else{
                  swap(arr[mid],arr[hi]) ,  hi--;
            }
       }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

        int n;
         cin>>n;
          int arr[n];
           for(auto &it:arr) cin>>it;
           int p1,p2,p3; cin>>p1>>p2>>p3;
        dutchNationalFlag(arr,n,p1,p2,p3);
        cout<<"\n";
        for(auto it:arr) cout<<it<<" ";


return 0;
}
