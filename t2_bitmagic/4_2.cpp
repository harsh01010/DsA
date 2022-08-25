#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
      cin>>n;
        int arr[n];
          int xorr;
        for(int i=0;i<n;i++){
             cin>>arr[i];
             xorr^=arr[i];
        }
        for(int i=1;i<=n+1;i++){
            xorr^=i;
        }
        cout<<xorr<<endl;
    return 0;
}