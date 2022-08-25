#include<bits/stdc++.h>
#define ll long long
using namespace std;
int get2nd(vector<int>arr){
      int res = -1;
       int max = 0;
       for(int i=1;i<arr.size();i++){
             
             if(arr[i] > arr[max]){
               res = max;
                max = i;}  
                else if(arr[i] < arr[max]){
                      if(res==-1)
                       res = i;
                        else if(arr[res] < arr[i])
                         res = i;
                } 
              }
       
       return res;
}
int main()
{

      int n;
        cout<<"enter the total number of elements\n";
         cin>>n;
         vector<int>arr(n);
         for(int i=0;i<n;i++){
               cin>>arr[i];
         }
         
         int ans = arr[get2nd(arr)];
     cout<<"the 2nd maximum in the array is "<<ans<<endl;


return 0;
}