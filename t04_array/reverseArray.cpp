#include<bits/stdc++.h>
#define ll long long
using namespace std;
void revArr(vector<int>&arr){  // refrence pass nhi karne par changes main me reflect nhi honge.
      int x = arr.size() - 1;
             //cout<<x<<endl;
              for(int i=0;i<(x+1)/2 ;i++){
                   int temp = arr[i];
                   arr[i] = arr[x-i];
                   arr[x-i] = temp; 
}
}

void rev2Arr(vector<int>&arr){
     int x = arr.size();
     int low =0 , high = x-1;
     while(low<high){
           swap(arr[low],arr[high]);
            low++;
            high--;
     }
}
int main()
{

        int n;
          cout<<"enter the total number of elements in the array\n";
          cin>>n;
           vector<int>arr;
            cout<<"enter the elements of the array\n";
             for(int i=0;i<n;i++){
                   int ele;
                    cin>>ele;
                     arr.push_back(ele);
             }
             rev2Arr(arr); // revArr(arr);
            
              
              cout<<"the array has been reversed :: "<<endl;
               for(int i = 0;i<n;i++){
                     cout<<arr[i]<<" ";
               }



return 0;
}