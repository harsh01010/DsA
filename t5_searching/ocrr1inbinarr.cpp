#include<bits/stdc++.h>
#define ll long long
using namespace std;
int last0(vector<int>arr , int l , int h , int n){
         if(l>h) return -1;
		 int mid = (l+h)/2;
		 if(arr[mid] == 0){
			  if(mid == n-1) return mid;
			  else if(arr[mid+1] == 0) return last0(arr ,mid+1,h,n);
			  else return mid;
		 }
		 if(arr[mid] > 0) return last0(arr,l , mid-1 ,n);
		 return -1;  
}
int find(vector<int>arr){
   int ind =  last0(arr ,0,arr.size()-1,arr.size());
    
	 return ind==-1?-1:arr.size() - ind -1;
  
}
int main()
{
	  int n;
	  cin>>n;
	  vector<int>arr;
	   for(int i=0;i<n;i++){
		  int ele;
		    cin>>ele;
			arr.push_back(ele);
	   }
	   int ocrr1 =  find(arr);
    cout
	  <<ocrr1<<"\n";
return 0;
}