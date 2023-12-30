#include<bits/stdc++.h>
#define ll long long
using namespace std;

int ind(int arr[],int l , int h , int ele){
     if(l>h) return -1;
     int mid = (l+h)/2;
     if(arr[mid]==ele){
         if( mid >0 && arr[mid-1]==ele)
           return ind(arr,l,mid-1,ele);
     }
     if(arr[mid]>ele) return ind(arr , l , mid-1,ele);
     else if(arr[mid]<ele) return ind(arr,mid+1,h , ele);
     return -1;
}


int main()
{

      int n;
        cin>>n;
          int arr[n];
            for(int i=0;i<n;i++)cin>>arr[i];

            int ele;
             cin>>ele;

             int x = ind(arr,0,n-1,ele);
              cout<<x<<"\n";



return 0;
}