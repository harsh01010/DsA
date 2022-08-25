#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
     cin>>n;

       int arr[n];
         int oddOccu=0;
        for(int i = 0 ;i<n;i++) {cin>>arr[i];
           oddOccu^=arr[i];
        }
        cout<<oddOccu<<endl;


    return 0;
}