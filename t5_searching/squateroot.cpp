#include<bits/stdc++.h>
#define ll long long
using namespace std;
int binsqt(int n){
	  int l = 0 , h=n , mid ,ans;
	  while(l<=h){
		  mid = (l+h)/2;
		  int msq = mid*mid;
		  if(msq == n) return mid;
		  else if(msq > n) h = mid-1;
		  else if(msq<n){  ans = mid; l = mid+1;}
	  }
	  return ans;
}
int main()
{
    // floor of square root using binary search

	 int n;
	   cin>>n;

	   int val = binsqt(n);
	  
       cout<<val<<"\n";
return 0;
}