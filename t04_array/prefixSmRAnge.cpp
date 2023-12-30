#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

     // given range L and R find maximum occuring element in the  between two points of each range.

       int n;
          cin>>n;
            int L[n] , R[n];
            for(int i=0;i<n;i++) cin>>L[i];
            for(int i=0;i<n;i++) cin>>R[i];

            // let maximum value of numbers in ranges be 1000;

            vector<int>arr(1000 , 0);

             for(int i=0;i<n;i++){
                 arr[L[i]]++;
                 arr[R[i] + 1]--;
             }

             int mxm = arr[0];
                 int res = 0;
               for(int i=1;i<1000;i++){
                    arr[i]+=arr[i-1]; 
                       if(mxm<arr[i]){
                    mxm = arr[i];
                     res = i; 
                       }
               }
               cout<<res<<"\n";
               



return 0;
}