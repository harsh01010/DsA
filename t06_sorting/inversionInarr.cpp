#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int cnt(int arr[],int lo,int mid,int hi)
 {
      int n1 = mid-lo+1; int a[n1];
      int n2 = hi-mid; int b[n2];

      for(int i=0;i<n1;i++) a[i] = arr[lo+i]; for(int i=0;i<n2;i++) b[i] = arr[mid+1+i];

       int i=0,j=0,k=lo,ans=0;
       while(i<n1 and j<n2)
       {
         if(a[i]<=b[j] ) arr[k++] = a[i++];
         else{
               ans+=(n1-i);
               arr[k++] = b[j++];
         }
       }
       while(i<n1) arr[k++] = a[i++];
       while(j<n2)arr[k++] = b[j++];
       return  ans;
 }



int findinv(int arr[],int lo,int hi)
{
     int inv=0;
     if(lo<hi)
     {  int mid = (lo+hi)/2;
         inv+=findinv(arr,lo,mid);
         inv+=findinv(arr,mid+1,hi);
         inv+=cnt(arr,lo,mid,hi);

     }
     return inv;
}

int main()
{

    int n;
      cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
      cout<<findinv(arr,0,n-1);


return 0;
}