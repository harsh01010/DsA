#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

    for(int i=1;i<=5;i++)
    {
         for(int j=1;j<=5;j++)
         {
             if( i<=3  && (4-i <= j and j<= i+2))
                cout<<"* ";
              else if(i>=4 && (i-2 <= j and j<=8-i))
              cout<<"* ";
              else cout<<"  ";
         }
         cout<<"\n";
    }



return 0;
}