#include<bits/stdc++.h>
#define ll long long
using namespace std;

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
           int ans = 0;
             int chain = 1;
              bool enterd;
              for(int i=0;i<n-1;i++){
                 if(arr[i]%2 != arr[i+1]%2){
                      chain++;
                       enterd = true;
                 }
                 else {
                    
                      ans = max(ans,chain);
                       chain = 1;
                 }
              }
              if(enterd){
                 ans = max(ans,chain);
              }
              cout<<ans<<endl;




return 0;
}