#include <iostream>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
	ll t;
	  cin>>t;
	    while(t--)
	    {
	          ll a,b,p,q;
	           if(p%a != 0 or q%b !=0) cout<<"NO\n";
	           else {
	           ll x = p/a , y = q/b;
	           
	           if(x==y or abs(x-y)==1) cout<<"YES\n";
	           else cout<<"NO\n";
	           }
	    }
	return 0;
}
