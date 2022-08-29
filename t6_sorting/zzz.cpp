#include<bits/stdc++.h>
#define ll long long
using namespace std;


 ll lower_bound(vector<ll> &v, ll ele)
{
	ll lo = 0;
	ll hi = v.size() - 1;
	while (hi - lo > 1)
	{
		ll mid = (lo + hi) / 2;
		if (v[mid] <= ele)
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid;
		}
	}
	if (v[lo] > ele)
	{
		return lo;
	}
	if (v[hi] > ele)
	{
		return hi;
	}
	return -1;
}

ll func(vector<ll>&arr,ll lo,ll hi,ll ele)
{
	   ll ans=-1 , n = hi;
	    while(lo<=hi)
		{
			  ll mid = (lo+hi)/2;
			  if(arr[mid] < ele) lo = mid+1;
			  else if(arr[mid] == ele)
			  {
				 if( mid <n-1 and arr[mid+1] == ele ){ ans = mid+1; lo = mid+1;}
				  else if(mid==n) return -1;
				  else return mid+1; 
			  }
			  else if(arr[mid] > ele)
			  {
				   if(mid < n-1 and arr[mid+1]==arr[mid]){ ans = mid; lo = mid+1;}
				   else if(mid > 0 and arr[mid-1]>ele){ ans = mid; hi = mid-1;}
				   else return mid;
			  }
		}
		return ans;
}
int main()
{

   ll n;
     cin>>n;
       vector<ll>arr;
       for(ll i=0;i<n;i++)
        {
           ll ele;
             cin>>ele;
              arr.push_back(ele);
        }
        int ele;
          cin>>ele;
         cout<<lower_bound(arr,ele);
         cout<<func(arr,0,arr.size()-1,ele);

   



return 0;
}