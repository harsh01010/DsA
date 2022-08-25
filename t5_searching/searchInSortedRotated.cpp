#include<bits/stdc++.h>
#define ll long long
using namespace std;
int find(vector<int>arr , int target){
       int low = 0 , high = arr.size()-1;
       while(low<=high)
       {
              // normal binary search
               int mid = (low +high)/2;
               if(arr[mid] == target) return mid;

               else{

                 // left half sorted
                 if(arr[low] <= arr[mid-1]){

                         if(arr[low] <= target and  target <= arr[mid-1] )           // < , > , = use them properly.
                            high = mid -1;
                         else
                            low = mid+1;
                 }
                 //right half is sorted
                else //if(arr[mid+1] <= arr[high])
                      {
                       if(arr[mid+1] <= target and target <= arr[high])
                        low = mid+1;
                        else 
                        high = mid-1;
                 }
               }
       }
       return -1;
}
int main()
{

       int n;
         cin>>n;
          vector<int>arr;
           for(int i=0;i<n;i++) {
               int ele;
                 cin>>ele;
                 arr.push_back(ele);
           }

           int target;
            cin>>target;

            int x = find(arr,target);
            cout
            <<x<<" ";
return 0;
}