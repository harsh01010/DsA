#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

 void print(int arr[],int n)
 {
    for(int i =0 ;i<n;i++) cout<<arr[i]<<" ";
 }
 
 void rev(int arr[],int n)
 {
    int lo = 0 , hi = n-1;
     while(lo<hi)
     {
         swap(arr[lo],arr[hi]);
         lo++,hi--;
     }
 }

void merge(int a[], int n,int b[],int m)
{
      int ret[m+n];
      int k = 0;
           int i = 0  ,j =0;
           while(i<n and j<m)
           {
                if(a[i] < b[j]) cout<<a[i++]<<" ";
                else if(a[i] > b[j]) cout<<b[j++]<<" ";
                else {
                    cout<<a[i++]<<" "<<b[j++]<<" ";
                }
           }
           while(i<n) cout<<a[i++]<<" ";
           while(j<m)  cout<<b[j++]<<" ";

           
}

void unionn( int a[],int n,int b[],int m)
{
    // union of a ,b
    int i = 0 , j=0;
         while(i<n && j<m)
         {  
            if(a[i] < b[j])
                cout<<a[i++]<<" ";
            else if(a[i] > b[j])
               cout<<b[j++]<<" ";
              else i++,j++;
         }
         while(i<n) cout<<a[i++]<<" ";
}

void intersect(int a[],int n,int b[],int m )
{
      int i = 0 , j=0;
       while(i<n and j<m)
       {
           if(a[i]<b[j]) i++;
           else if(a[i]>b[j]) j++;
           else
            { cout<<a[i++]<<" ";
              j++;}
       }
}

void diff(int a[],int n,int b[],int m)
{
    int i=0,j=0;
   
     while(i<n and j<m)
     {
        if(a[i]<b[j]) cout<<a[i++]<<" ";
        else if(a[i]>b[j]) j++;
        else {cout<<a[i]<<" ";i++,j++;}
     }
     while(i<n) cout<<a[i]<<" ";
}

void symmDiff(int a[],int n,int b[],int m)
{
     int i=0,j=0;
     while(i<n and j<m)
     {
        if(a[i] <b[j]) cout<<a[i++]<<" ";
        else if(a[i] > b[j]) j++;
        else {i++,j++;}
     }
     while(i<n) cout<<a[i++];
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

     int n; cin>>n;
    int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
   // rev(arr,n);
    
    print(arr,n);

return 0;
}