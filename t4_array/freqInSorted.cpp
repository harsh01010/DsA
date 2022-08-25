#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int>arr){
    int cnt=1;
      //cout<<"hello world";
    for(int i=0;i<arr.size()-1;i++){
      if(arr.at(i) == arr.at(i+1)){
          cnt++;
      }
      else{
          cout<<cnt<<" ";
            cnt=1;
      }
    }
    cout<<cnt;
   
}
int main()
{

     int n;
       cout<<"enter the total number of elements in the array\n";
         cin>>n;
         vector<int>arr;
          cout<<"enter the total number of elements in the array\n";
            for(int i=0;i<n;i++){
                 int ele;
                   cin>>ele;
                    arr.push_back(ele);
            }

          solve(arr);



return 0;
}