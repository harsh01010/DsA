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
          while(t--)
          {
              string s;
                cin>>s;
                int arr[25] = {0};
                 for(int i=0;i<s.length();i++)
                     arr[s.at(i) - 'a']++;

                     for(int i=0;i<25;i++)
                     {
                          if(arr[i])
                          {
                              cout<<char(i+'a')<<" "<<i<<"\n";
                          }
                     }
          }



return 0;
}