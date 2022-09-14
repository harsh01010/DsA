#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif
     int t;
       cin>>t;
         while(t--){
      int colr[3]; for(auto &it:colr) cin>>it;
      sort(colr,colr+3);
     int ans = 0 , secColr = 0;
       for(int i=0;i<3;i++) {if(colr[i]!=0) ans++;}

       for(int i = 2 ; i>0;i--)
       {
            for(int j = i-1 ; j>=0;j--)
            {
                 if(colr[i] >1 and colr[j]>1) secColr++ , colr[i]-- , colr[j]--;
                 
            }
       }

       cout<<(ans+secColr)<<"\n";


         }

return 0;
}