#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n;
      cin>>n;
           int arr[n];
             for(int i=0;i<n;i++)
              cin>>arr[i];

              int prefix_arr[n];
                 prefix_arr[0] = arr[0];
                  for(int i=1;i<n;i++){
                           prefix_arr[i] = arr[i] + prefix_arr[i-1];
                  }
                  //for(int i=0;i<n;i++) cout<<prefix_arr[i]<<"  ";
      int r , l;
       cout
       <<"enter indices r and l\n";
        cin>>r>>l;
          if(l!=0){
              cout<<prefix_arr[r] << " "<<prefix_arr[l-1]<<"\n";
          cout<<prefix_arr[r] - prefix_arr[l-1];
          }
          else
             cout<<prefix_arr[r]<<endl;

return 0;
}