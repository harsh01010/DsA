#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

  int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = 1;
    
     for(int i=1;i<n;i++){
       if(arr[i]!=arr[i-1]){
      
         arr[res] = arr[i];
         res++;
       }
     }
     cout<<res<<endl;
   
      for(int i=0;i<res;i++)
       cout<<arr[i]<<" ";

return 0;
}