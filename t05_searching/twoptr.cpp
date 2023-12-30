#include<bits/stdc++.h>
#define ll long long
using namespace std;

 void solve(vector<int>arr , int sum){
     int n = arr.size();
       int l = 0 , r = n-1;
            while(l<=r){
                if(arr[l] + arr[r] == sum) { cout<<"YES\n"; return;}
                if(arr[l] + arr[r]  > sum) r--;
                else l++;
            }
            cout<<"No such pair found\n";
 }
int main()
{
     /*****************************************************************************
      // given a sorted array , we have to find an pair in the array which has sum equal to a given number
      approch:
      pointer 1 at index 0 , pointer 2 at index n-1
      sum = 1 + 2 , 
      if sum > given sum , move right pointer
      if sum < given sum move left pointer
      O(n) complexity

      for a sorted array it is the best approch , but if the aray is not sorted , 
       then hashing can be used over sorting the array and then using two pointer approch
     **************************************************************************/
    int n;
      cin>>n;
        vector<int>arr;
          for(int i=0;i<n;i++){
              int ele;
                cin>>ele;
                 arr.push_back(ele);
          }
          int sum;
            cin>>sum;
            int l = 0 , r = n-1;
            solve(arr , sum);
return 0;
}