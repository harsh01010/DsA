#include<bits/stdc++.h>
#define ll long long
using namespace std;
 void printAns(vector<int>v){
     int temp = v[v.size()-1];
         cout<<temp<<" ";
      for(int i = v.size() -2;i>=0;i--){
          if(temp<v.at(i)){
             temp = v.at(i);
           cout<<temp<<" ";
          }
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
             int ele;
               cin>>ele;
                v.push_back(ele);
           }
           
           printAns(v);
return 0;
}