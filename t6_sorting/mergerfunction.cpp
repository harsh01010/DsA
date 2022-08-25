#include<bits/stdc++.h>
#define ll long long
using namespace std;


void mergearr(int arr[] , int n , int mid)  // implement for low and high rather than assuming low as zero.
{
      int n1 = mid +1;
      int n2 = n-mid-1;
      int aux1[n1] , aux2[n2];
      int j=0;
      for(int i=0;i<n1;i++)
      aux1[i] = arr[j++];
      for(int i=0;i<n2;i++)
      aux2[i] = arr[j++];

      int ind1=0,ind2=0,ind=0;
      while(ind1 <n1 and ind2<n2)
      {
         if(aux1[ind1]<aux2[ind2]) arr[ind++] = aux1[ind1++];
         else arr[ind++] = aux2[ind2++];
      }
      while(ind1<n1)
         arr[ind++] =aux1[ind1++];
         while(ind2<n2) arr[ind++] = aux2[ind2++];

       
     
}
int main()
{

      int n;
        cout<<"enter total number of elements in the array\n";
         cin>>n;
         int arr[n];
         for(auto &it:arr) cin>>it;
         int mid; cin>>mid;  // upto mid left part is sorted and after that right part is sorted
      
       mergearr(arr,n,mid);
      for(auto it:arr) cout<<it<<" ";
         



return 0;
}