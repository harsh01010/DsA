#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool pairr(int arr[] , int n , int num){
          int l = 0 , r = n-1;
          while(l<r){
               int sum = arr[l] + arr[r];
               if(sum == num) return true;
               else if(sum > num) r--;
               else l++;
          }
          return 0;
}
void solve(int arr[] , int n , int sum){
       
            for(int i=0;i<n;i++){
                 if(pairr(arr , n , sum - arr[i]) == true) {cout<<"YES\n";return;}
            }
            cout<<"NO such triplet";

}
int main()
{

      //triplet
       int n;
         cin>>n;
           int arr[n];
            for(auto &it : arr) cin>>it;
            int sum;
              cin>>sum;
              solve(arr , n , sum);



return 0;
} 