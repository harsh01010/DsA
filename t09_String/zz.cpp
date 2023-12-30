#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

     ll n;
       cin>>n;
       while(n != 1)
       {
            cout<<n<<" ";
            if(!(n&1)) n>>=1;
            else n = n*3 + 1;
       }
       cout<<"1 \n";



return 0;
}