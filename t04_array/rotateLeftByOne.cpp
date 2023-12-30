#include<bits/stdc++.h>
#define ll long long
using namespace std;

 void rotateVec(vector<int>&v){
     for(int i=0;i<v.size() -1;i++){
        swap(v[i] , v[i+1]);
     }
 }

int main()
{

     int n;
       cout<<"enter the total number of elements in the array\n";
        cin>>n;
         vector<int>v;
         cout<<"enter the elements of the array\n";
         for(int i=0;i<n;i++){
             int  ele;
               cin>>ele;
               v.push_back(ele);
         }
   for(int i=0;i<2;i++)
   rotateVec(v);
   for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";


return 0;
}