#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void print(int arr[],int lo,int hi)
{
      for(int i=lo;i<=hi;i++) cout<<arr[i]<<" ";
      cout<<"\n";
}
int hoarse(int arr[],int lo,int hi)
  {
       int i = lo-1 , j = hi+1,pivot = arr[lo];
        while(1)
        {
              do{
                 i++;
              }while(arr[i]<pivot);

              do{
                  j--;
              }while(arr[j]>pivot);
              if(i>=j) return j;
              swap(arr[i],arr[j]);
        }
  }
int lomuto(int arr[],int lo,int hi)
{
       int pivot = arr[hi];
        int j= lo-1;
       for(int i=0;i<=hi-1;i++)
       {
           if(arr[i]<pivot)
           {
              j++;
              swap(arr[i],arr[j]);
           }
           
       }
       swap(arr[j+1],arr[hi]);
       return j+1;
}

void solve()
{
      int n; cin>>n;
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      cout<<lomuto(arr,0,n-1)<<"\n";
      print(arr,0,n-1);
      cout<<hoarse(arr,0,n-1)<<"\n";
      print(arr,0,n-1);
    
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
#endif

    ll test=1;
 cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
