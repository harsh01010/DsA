
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void bubbleSort(int arr[],int n)
{
       for(int i=0;i<n-1;i++)
       {
          bool swapped = false;
           for(int j=0;j<n-i-1;j++){
              if(arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]);
                  swapped = true;
              }
           }
           if(!swapped) return;
       }
}

void selectionSort(int arr[],int n)
{
   for(int i=0;i<n;i++)
     {
          int minind = i;
           for(int j=i;j<n;j++)
            {
                 if(arr[minind]>arr[j]) minind =  j;
            }
            swap(arr[minind],arr[i]);
     }
}

void insertionSort(int arr[],int n){
        for(int i=1;i<n;i++){
              int key = arr[i];
              int j = i-1;
                 while(j>=0 and arr[j]>key)
                 {
                    arr[j+1] = arr[j];
                      j--;
                 }
                 arr[j+1] = key; 
        }
}


int main()
{
         int t;
         cout<<"enter total number of testcases\n";
           cin>>t;
            
            while(t--)
            {   cout<<"enter total number of elements in the array\n";
                  int n;
                    cin>>n;
                    int arr[n];
                    cout<<"enter the elements of the array\n";
                    for(auto &it:arr) cin>>it;
                  cout<<"choose any optiion:\n1.bubble sort,\n2.selection sort,\n3.insertion sort\n";
                  int ch;
                  cin>>ch;
                  if(ch==1)
                    bubbleSort(arr,n);
                 else if(ch==2)
                  selectionSort(arr,n);
                  else if(ch==3)
                    insertionSort(arr,n);
                    for(auto it:arr) cout<<it<<" ";
                    cout<<"\n";
                    
            }



return 0;
}