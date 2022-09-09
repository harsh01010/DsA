#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


// these problems are based on the partition funcition of the quick sort, 
// modify the pivot of the partition function to solve such problems.
// types
// +ve -ve , 0 1 , odd even e.t.c.
 void arrangePosNeg(int arr[],int n)
 {
     int i = -1 , j = n;
      while(1)
      {
            do{
               i++;
            }while(arr[i] <0);
            do{
               j--;
            }while(arr[j]>=0);
            if(i>=j) return;
            swap(arr[i],arr[j]);
      }
 }

void arrangeBin(int arr[],int n)
{
    int i = -1 , j = n;
     while(1)
     {
           do{
             i++;
           }while(arr[i]==0);
           do{
             j--;
           }while(arr[j]==1);
           if(i>=j) return;
           swap(arr[i],arr[j]);
     }
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

      int n; cin>>n;
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];

      arrangePosNeg(arr,n);
      for(int i=0;i<n;i++) cout<<arr[i]<<" "; 
       cout<<"\n";


      int n1; cin>>n1;
       int ar[n1]; for(auto &it:ar) cin>>it;
        arrangeBin(ar,n);
        for(auto it:ar) cout<<it<<" ";


return 0;
}