#include<bits/stdc++.h>
#define ll long long
using namespace std;

 void rec(int arr[],int i,int j=0)
 {
     if(i==1) return;
      else if(j<i-1)
      {  
             if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
             rec(arr,i,j+1);
      }
      else{
             rec(arr,i-1);
      }
 }
int main()
{

      int n; cin>>n;
      int arr[n];
      for(auto &it:arr) cin>>it;
       
       rec(arr,n);

       for(int i=0;i<n;i++) cout<<arr[i]<<" ";




return 0;
}