#include<bits/stdc++.h>
#define ll long long
using namespace std;

int funct(vector<int>arr){
     int minn = arr.at(0);
      int res= arr.at(1) - arr.at(0);
      for(int i=1;i<arr.size();i++){
         res = max(res , arr[i]-minn);
          minn = min(minn,arr[i]);
      }
      return res;
}


int main()
{

     int n;
    cout<<"enter the total number of elements in the array\n";
      cin>>n;
       vector<int>arr;
       cout<<"enter the array elements\n";
        for(int i=0;i<n;i++){
          int ele;
            cin>>ele;
             arr.push_back(ele);
        }

        int ans = funct(arr);
        cout<<ans<<endl;



return 0;
}