#include<bits/stdc++.h>
using namespace std;
// naive approach
/*
void moveZero(vector<int>&arr){
  for(int i=0; i<arr.size();i++){
      if(arr[i]==0){
           int swp = i;
         for(int j=i+1 ; j<arr.size() ; j++){
            if(arr[j] != 0){
               arr[j] ^=arr[swp]^=arr[j];
                 swp = j;
            }
         }
      }
  }
}
*/
// efficient approach
void moveZero(vector<int>&arr){
    int cnt = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i] , arr[cnt]);
            cnt++;
        }
    }
}
int main(){

  int n;
   
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  moveZero(arr);
  for(int i=0;i<arr.size();i++){
      cout<<arr[i]<<" ";
  }

    return 0;
}