#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<int>ans(vector<int>&arr1,int n1,vector<int>&arr2,int n2)
{
      vector<int>ans;
       int i=0,j=0;

        while(i<n1 and j<n2)
        {
              if(arr1[i] < arr2[j]) i++ , j++;

              else if(arr1[i] == arr2[j])
              {
                   if(ans.size() == 0) ans.push_back(arr1[i]);
                   else if(ans[ans.size() -1] == arr1[i]) i++,j++;
                   else ans.push_back(arr1[i]) ,i++,j++;
              }
              else j++;
              
        }
        return ans;
}
int main()
{
   int n1 ,n2;
     cin>>n2>>n2;
      int arr1[n1],arr2[n2];
      for(int i=0;i<n1;i++) cin>>arr1[n1];
       for(int i=0;i<n2;i++) cin>>arr2[n2];

 


    



return 0;
}