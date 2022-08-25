#include<bits/stdc++.h>
#define ll long long
using namespace std;


 bool checkSorted(vector<int>arr){
      for(int i=0;i<arr.size() -1;i++){
          if(arr[i+1] < arr[i])
            return false;
      }
      return true;
 }
int main()
{

       int n;
         cin>>n;
           vector<int>arr(n);
           for(int i=0;i<n;i++){
               cin>>arr[i];
           }

           if(checkSorted(arr))
             cout<<"array is sorted is increasing order"<<endl;
              else cout<<"array is not sorted in increasing order"<<endl;



return 0;
}