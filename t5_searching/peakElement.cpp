#include<bits/stdc++.h>
#define ll long long
using namespace std;

int peakElement(vector<int>arr){
       int low = 0 , high = arr.size()-1;

       while(low<=high)
       {
            int mid = (low+high)/2;
            if( (mid == 0 || arr[mid] >= arr[mid-1])
                          and
            (mid == arr.size()-1 || arr[mid] >= arr[mid+1]) )
              return mid;

              else if( mid>0 && arr[mid] <= arr[mid-1]){
                high = mid-1;
              }
              else
                low = mid+1; 
       }
       return -1;
}

int main()
{

       int n;
         cin>>n;
     vector<int>arr;
     for(int i=0;i<n;i++){
          int ele;
          cin>>ele;
           arr.push_back(ele);
     }

     int ind = peakElement(arr);
         cout<<"peak element is "<<arr[ind]<<"\n";


return 0;
}