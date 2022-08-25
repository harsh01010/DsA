#include<bits/stdc++.h>
#define ll long long
using namespace std;


// the size of the array is infinite
// O(logn)
int binser(vector<int>arr , int l , int h , int ele){
          int mid;
          while(l<=h){
               mid = (l+h)/2;
                if(arr[mid] == ele) return mid;
                else if(arr[mid]>ele) h = mid-1;
                else l = mid+1;
          }
          return(-1);
}

int serinf(vector<int>arr , int ele){
     if(arr[0] == ele) return 0;
       int ind = 1;
       while(arr[ind] < ele) ind*=2;

       if(arr[ind] == ele) return ind;
       return(arr,ind/2 + 1 , ind-1 , ele);
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
         int x;
          cin>>x;

  int ind = serinf(arr,x);
   cout<<ind<<" \n";
   


return 0;
}