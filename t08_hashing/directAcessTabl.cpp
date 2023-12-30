#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


class DAT{
     public:
         int table[1000] = {0};
        void insert(int i)
         {
             table[i]  =1;
         }
         void del(int i)
         {
              table[i] = 0;
         }
         int search(int i)
         {
             return table[i];
         }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif
   DAT tab;

    int t; cin>>t;
     while(t--)
     {
          int x; cin>>x;
           tab.insert(x);
     }

     int tt; cin>>tt;
      while(tt--)
      {
           int x; cin>>x;
            cout<<tab.search(x)<<"\n";
      }


return 0;
}