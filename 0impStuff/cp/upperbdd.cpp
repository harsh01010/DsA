#include <bits/stdc++.h>
#define ll long long
using namespace std;

int upperBdd(vector<int>&arr,int x)
{
	  int lo = 0 , hi = arr.size()-1;
	      while(lo<=hi)
		  {
			   int mid = (lo+hi)/2;
			     if(arr[mid]<= x) lo = mid+1;
				 else hi = mid-1;
		  }
		  if(lo < arr.size() and arr[lo] > x) return lo;
		  else if(hi > -1 and arr[hi] > x) return hi;
		  return -1;
}


int main()
{

	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int ele;
		cin >> ele;
		arr.push_back(ele);
	}
	int x;
	  cin>>x;
	  cout<<upperBdd(arr,x)<<" "<<arr[upperBdd(arr,x)]<<"\n";

	return 0;
}