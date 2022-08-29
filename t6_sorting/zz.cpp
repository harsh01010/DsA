#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	  int t;
	    cin>>t;
		  while(t--)
		  {
     int n;
	   cin>>n;
	     int arr[n];
		 for(auto &it:arr) cin>>it;

		 vector<int>ans;
		 for(int i=0;i<n-1;i++)
		  {
			  if(arr[i] > arr[i+1])
			   continue;
			   else ans.push_back(arr[i]);
		  }
		  if(arr[n-2] <= arr[n-1]) ans.push_back(arr[n-1]);
		  cout<<ans.size()<<" ";
		  for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
		  cout<<"\n";
}
	



return 0;
}