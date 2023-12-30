#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

     int n;
        cout<<"ente the total number of elements in the array\n";
          cin>>n;
           vector<int>arr;
             cout<<"enter the elements of the array\n";
             for(int i=0;i<n;i++) {int ele;
               cin>>ele;
                arr.push_back(ele);}
                   
                   int k;
                     cout<<"enter the size of the subarray\n";
                      cin>>k;
           
                int tempsum = 0;
                int ans = INT_MIN;
                
                  //setting the window
                   for(int i=0;i<k;i++){
                     tempsum+=arr.at(i);
                   }
                     ans = max(tempsum , ans);
                   //moving the window

                    for(int i=k;i<n;i++){
                       tempsum+=(arr[i] - arr[i-k]);  // 1 postion above
                        ans = max(ans,tempsum);
                    }

                    cout<<"the maximum sum of subarry having size of "<<k<<" is :"<<ans<<"\n";



return 0;
}