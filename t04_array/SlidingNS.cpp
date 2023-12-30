#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(vector<int>arr , int s){
          int curr_sum = arr[0];
          int start = 0;
          int end = 1;
           for(;end<=arr.size();end++){
             // clearing the previous window
                   while(curr_sum >s && start < end-1){
                        curr_sum-=arr[start];
                         start++;
                   }
                   if(curr_sum == s) return true;
                    // forming window
                    if(end<arr.size())
                   curr_sum+=arr[end];
           }
           if(curr_sum==s) return true;
           return false;

}

int main()
{

    // given , a non negative array , and s , check subarray exists or not,
     cout
       <<"enter n and s\n";
        int n , s;
          cin>>n>>s;
            vector<int>arr;
              for(int i=0;i<n;i++){
                 int ele;
                   cin>>ele;
                     arr.push_back(ele);
              }
             
             int ans = solve(arr , s);
            if(ans) cout<<"YES\n";
            else
                cout<<"NO\n";


return 0;
}

                        /*
        
    7 , 33

    1 , 4 , 20 , 3  , 10 , 15
    ^
  s=1  s=5 s=25 s=28 s=38
                      38>33 > start substracting from back
  37     33
        33==33 > return true;
                           

                  **/