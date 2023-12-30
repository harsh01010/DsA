 #include<bits/stdc++.h>
 #define ll long long
 using namespace std;
 
 int main()
 {
 
    
     int  t;
       cin>>t;
         while(t--) {
              int n;
                cin>>n;
                 vector<int>arr;
                  for(int i=0;i<n;i++){
                     int ele;
                         cin>>ele;
                           arr.push_back(ele);
                             
                  }
                   int chain=0;
                     int ans = 0;
                      bool entered;
                       for(int i=0;i<n;i++){
                         if(arr[i]==1)
                          {
                             chain++;
                             entered = true;
                          }
                          else {
                             ans = max(ans , chain);
                              chain=0;
                               entered = false;
                          }
                          
                       }
                       if(entered) ans = max(chain , ans);
                        cout<<ans<<"\n";

         }
 
 
 return 0;
 }