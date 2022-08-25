#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

	   int t;
	     cin>>t;
		   while(t--){
			  int n;
			    cin>>n;
				  vector<int>arr;
				    for(int i=0;i<n;i++)
					  {int ele;
					    cin>>ele;
						 arr.push_back(ele);
						 }
						  
						 int lmax[n];
						  int rmax[n];
						    lmax[0] = arr.at(0);
						    rmax[n-1] = arr.at(n-1);
							
						    for(int i=1;i<n;i++){
								  lmax[i] = max(lmax[i-1] , arr.at(i));
							}
							
							for(int i=n-2;i>=0;i--){
								   rmax[i] = max(rmax[i+1] , arr.at(i));
							}
							 
							   for(int i=0;i<n;i++) cout<<lmax[i]<<" ";
							    cout<<"\n";
								for(int i=0;i<n;i++) cout<<rmax[i]<<" ";
							    cout<<"\n";


							int ans = 0;
							  for(int i=1;i<n-1;i++){
							    ans +=  min(lmax[i] , rmax[i]) -arr[i];
		                   }    
						    cout<<ans<<"\n";

		   }



return 0;
}