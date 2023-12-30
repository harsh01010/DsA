#include<bits/stdc++.h>
#define ll long long
using namespace std;


bool func(int arr[],int var){
   for(int i=0;i< sizeof(arr) / sizeof(int) ;i++){
       if(arr[i]==var)
         return true;
   }
   return false;
}
int main()
{

      int n;
        cin>>n;
        int var;
         cin>>var;
          int arr[n];
           for(int i=0;i<n;i++)
             cin>>arr[i];
             if(func(arr,var))
               cout<<"found"<<endl;
                else cout<<"not found"<<endl;



return 0;
}