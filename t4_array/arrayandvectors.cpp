#include<bits/stdc++.h>
//#include<vector>
#define ll long long
using namespace std;

int main()
{
   // fixed size arrays
     int arr[3];
     int n=5;
      int arr1[n];
      int *arr2 =  new int[10];
    
 // dynamic array in c++ i.e vector.
  
  vector<int>vec;
  vec = {3,4,5};
  for(int i= 0;i<5;i++){
       int n;
         cin>>n;

       vec.push_back(n);
  }
  
  for(int i=0;i<vec.size();i++){
     //  cout<<vec[i]<<" ";
      cout<<vec.at(i)<<" ";
  }
  
   


return 0;
}