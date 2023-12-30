#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

    int n; cin>>n;
      

      for(  int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if( i == 1 or i == n)  cout<<"*  ";

              else if(j == (n-i+1)) cout<<"*  ";
              else cout<<"   ";
          } 
          cout<<"\n";
      }



return 0;
}