#include<bits/stdc++.h>
#define ll long long
using namespace std;
  int firstocr(int arr[] , int l , int h  , int ele){
           if(l>h) return -1;
              int mid = (l+h)/2;
		   if(arr[mid] == ele){
                  if(mid == 0) return mid;
				  else if(arr[mid-1] == ele) return firstocr(arr , l,mid-1,ele);
                  else return mid;
		   }
		   if(arr[mid] > ele) return firstocr(arr,0,mid-1 , ele);
		   if(arr[mid]<ele) return firstocr(arr,mid+1 , h , ele);

		   return -1;

  }
  int lastocr(int arr[] , int l , int h  , int ele , int n){
           if(l>h) return -1;
              int mid = (l+h)/2;
		   if(arr[mid] == ele){
                  if(mid == n-1) return mid;
				  else if(arr[mid+1] == ele) return lastocr(arr,mid+1 , h,ele,n);
                  else return mid;
		   }
		   if(arr[mid] > ele) return lastocr(arr,0,mid-1 , ele,n);
		   if(arr[mid]<ele) return lastocr(arr,mid+1 , h , ele,n);

		   return -1;

  }
 int ocr(int arr[] , int n , int ele){
	    int l= 0 , h =n-1;
		if( firstocr(arr , l , h ,ele) == -1) return -1;
		else
		  return (lastocr(arr,l,h,ele,n) - firstocr(arr,l,h,ele)+1);
 }
int main()
{
	  int n;
	    cin>>n;
		  int arr[n];
		   for(int i=0;i<n;i++) cin>>arr[i];

		   int ele;
			  cin>>ele;
       int x = ocr(arr,n,ele);
	   
	   x==-1?cout<<ele<<" occurs 0 time in the array\n": cout<<ele<<" occurs "<<x<<" time in the array\n";
return 0;
}