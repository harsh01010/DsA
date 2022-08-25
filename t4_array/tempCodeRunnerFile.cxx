#include<bits/stdc++.h>
#define ll long long
using namespace std;

 bool check_sort(vector<long long int>arr){
    for(long long int i=0;i<arr.size()-1 ;i++){
        if(arr.at(i)>arr.at(i+1))
           return false;
    }
    return true;
 }


 vector<long long int> findNcomp(vector<long long int>arr , long long int i){
      vector<long long int>ans(2);

   ans.at(0) =0;
     long long int j= i;
      for(;j<arr.size()-1;j++){
        if(arr[j] > arr[j+1])
             ans.at(0)+=arr[j];
      }
      ans.at(0)+=arr[j];
      ans.at(1) = j;
return ans;
   
 }

int main()
{

    long long int t;
      cin>>t;
        while(t--){
            int n , s;
              cin>>n>>s;
               vector<long long int>arr;
                 for(long long int i=0;i<n;i++){
                   int ele;
                     cin>>ele;
                      arr.push_back(ele);
                 }

                 if(check_sort(arr)) cout<<"YES,already sorted\n";
                 else
                    {
                        bool ans = true;
                       for(long long int i=0;i<arr.size()-1;i++){
                            if(arr.at(i) > arr.at(i+1))
                              {
                                     vector<long long int> anss = findNcomp(arr,i);
                                       if(anss.at(0) > s){
                                          cout<<"NO\n";
                                            ans = false;
                                            break;
                                       }
                                       i = anss.at(1);
                              }
                       }
                       if(ans) cout<<"YES\n";
                    }



        }



return 0;
}