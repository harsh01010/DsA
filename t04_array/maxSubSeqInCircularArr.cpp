#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
/*int main()
{
    // kandane on circular.
      int t; 
       cin>>t;
        while(t--){
              int n;
               cin>>n;
                int sum=0;
                  int wrr[n];
                   for (int i = 0; i < n; i++)
                   {
                      cin>>wrr[i];
                        sum+=wrr[i];
                   }
                    int minsum[n] = {0};
                     int maxsum[n]= {0}; 
                     maximum sum in the circular array will be : 
                                          :::totalSum - minsumOfNormalAray:::
                      for(int i=1;i<n;i++){
                          minsum[i]= min(minsum[i-1]+wrr[i] , wrr[i]);
                           maxsum[i] = max(maxsum[i-1]+wrr[i] , wrr[i]);
                      } 
                       int maxNorm=INT_MIN;
                        int minNorm = INT_MAX;
                        for(int i=0;i<n;i++){
                              if(maxsum[i]>maxNorm) maxNorm = maxsum[i];
                              if(minsum[i]<minNorm) minNorm = minsum[i];
                        }
                         int ans = max(maxNorm , sum-minNorm);

                 cout<<ans<<"\n";
                    
        }



return 0;
}  
*/
 // 1 ,3 , -4 , 8 , -2
  // max = max(normal , circular)
    // maximum circular sum ke liye pehle , kandane se minimum sum nikal lo fir,
      // usse total sum se minus kar do ,  mil jayega , maximum circular sum.
        int main(){

            int t;
                cout<<"enter the total number of test cases\n";
                  cin>>t;
                    while(t--){
                       int n;
                         cout<<"enter the total number of elements in the array\n";
                           cin>>n;
                            vector<int>arr;
                             int temp[n];
                             int Arrsum;
                              cout<<"enter the of elements the array\n";
                                for(int i=0;i<n;i++){
                                    int ele;
                                      cin>>ele;
                                        arr.push_back(ele);
                                        Arrsum+=ele;
                                }
                                temp[0] = arr.at(0);
                                 for(int i=1;i<n;i++){
                                       temp[i] = max(arr[i] , temp[i-1] + arr[i]);
                                 }
                                 int ans = temp[0];
                                  for(int i=0;i<n;i++){
                                       ans = max(ans , temp[i]);
                                  }
                                   cout<<"the maximum sum of a subsequence is : "<<ans<<"\n"; 
                                     //   CONDITION 
                                     if(ans>=0){
                                   int tempmin[n];
                                                                                                                                                          /*
                                          Insted of doing this , we can simply invert our aray of multiplying
                                          with -1 , And calculate the maximum sum using the same function as above.
                                           the maximum sum in the curcular array will be ,: sumofarr + maximumSumSubSeqOfInvertedArray
                                                   because : sumarr - (-maxOfInverted) = sumarr - minOfNonInverted 
                                                                                                                                                          */
                                    tempmin[0] = arr.at(0);
                                     for(int i =1;i<n;i++){
                                         tempmin[i] = min(tempmin[i-1]+arr.at(i) , arr.at(i));
                                     }
                                     int minsumans = INT_MAX;
                                      for(int i=0;i<n;i++){
                                         minsumans = min(minsumans , tempmin[i]);
                                      }
                                      cout<<"the minimum sum of a subsequence is : "<<minsumans<<"\n";

                                int  maxSumCircular = max(ans , Arrsum - minsumans);
                                 cout<<"the maximum sum of the circular subsequence is : "<<maxSumCircular<<"\n";
                                     }
                                      else cout<<"the maximum sum of the circular subsequence is : "<<ans<<"\n";
                                     

                    }
       
          return 0;
        }     