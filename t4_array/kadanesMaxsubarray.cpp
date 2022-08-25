 #include<bits/stdc++.h>
 #define ll long long
 using namespace std;
 
 int main()
 {
 
      // sub array is always contiguous. unlike subsequence
        //kadane's algo.    
        int t;
          cin>>t;
            while(t--){
                 int n;
                   cin>>n;
                    vector<int>arr;   // array can contain +ve and -ve numbers as well.
                      for(int i=0;i<n;i++){
                          int ele;
                            cin>>ele;
                             arr.push_back(ele);
                      }

                     int maxsum[n];
                      maxsum[0] = arr.at(0);
                      for(int i=1;i<n;i++){
                         maxsum[i] = max(arr[i] , maxsum[i-1] + arr[i]);
                      }
                      int ans = maxsum[0];
                       for(int i=1;i<n;i++){
                         ans = max(ans, maxsum[i]);
                       }
                        cout<<ans<<"\n";
                       
            }

            //  logic
            // 2 , 3 , -8 , 7 , -1 , 2 ,3
            // 2 , 5 , -3 , 7 , 6 , 8 , 11 <- max = 11
            //find sum of left subarry of maximum sum including arr[i]
 
 
 return 0;
 }