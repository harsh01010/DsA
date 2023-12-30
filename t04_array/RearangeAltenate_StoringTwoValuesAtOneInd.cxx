#include<bits/stdc++.h>
#define ll long long
using namespace std;


void rearr(vector<int>&arr){
      int len = arr.size();
       int maxind = len - 1;
       int minind = 0;
       int mxm = arr[len-1] +1;
        for(int i=0;i<len;i++){
             if(i%2 == 0) {
               arr[i]+= (arr[maxind]%mxm)*mxm;      // ek hi index par value ko iss tarah modify karenge ki ,
                                                    // wahan 2 value rakh saken
                                                     // dividen = divisor*quotient + remainder   , storing two values at one index
                maxind--;
             }                                         // rearrage hone ke bad sare maximum elements even index pr honge
                                                       // 1 2 3 4 5 6 ->  6 1 5 2 4 3
             else {
               arr[i]+= (arr[minind]%mxm)*mxm;
               minind++;
             }
        }
          for(int i=0;i<len;i++) arr[i]/=mxm;
}
int main()
{

    int t;
        cout<<"enter t\n";
         cin>>t;
          while(t--){
             int n;
               cout<<"\nenter n\n";
                cin>>n;
                vector<int>arr;
                 cout<<"enter elements\n";
                 for(int i=0;i<n;i++){
                   int ele;
                    cin>>ele;
                    arr.push_back(ele);
                 }
                 rearr(arr);

                 for(int i=0;i<n;i++) cout<<arr[i]<<" ";
          }



return 0;
}


