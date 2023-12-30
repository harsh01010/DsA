#include<bits/stdc++.h>
#define ll long long
using namespace std;

int lomutoPartition(int arr[],int lo,int hi)   // it has been assumed that the pivot element is the at the last index , 
                                             //in other cases we can simply swap pivot element and lat element, to make the pivot element as lat element.
{
       int pivot = arr[hi];
       int window = lo-1; // assuming the window of the smaller elements

        for(int i=lo;i<=hi-1;i++)   // hi-1 because , pivot == pivot 
        {
              if(arr[i] < pivot)
              {
                  window++;  // sliding the window
                  swap(arr[i] , arr[window]);
              }
              
        }
        swap(arr[window+1],arr[hi]);
        return window+1;

}


int main()
{
     int n;
       cin>>n;
         int arr[n];
          for(auto &it:arr) cin>>it;

    int lo =0,hi=n-1;
          int ind = lomutoPartition(arr,lo,hi);

          cout<<ind<<"\n";
           
           for(int i=0;i<n;i++) cout<<arr[i]<<" ";          
    



return 0;
}