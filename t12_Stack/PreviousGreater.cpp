#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void PreviousGreater(int *arr , int n)
{
      stack<int>stk;
      for(int i=0;i<n;i++)
      {
            while(!stk.empty() and stk.top() <= arr[i])
             stk.pop();

             int x = !stk.empty() ? stk.top():-1;
             cout<<x<<" ";
             stk.push(arr[i]);
      }
      cout<<"\n";
}


int main()
{
     
        int n; 
        cout<<"enter the number of elements in the array\n"; cin>>n;
        int arr[n];
        for(auto &it:arr) cin>>it;
        PreviousGreater(arr  , n);

     



return 0;
}