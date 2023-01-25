#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool solve(string s1 ,string s2)
{
        int i=0,j=0;
        while(i<s1.length() and j<s2.length())
        {
                  if(s1.at(i) == s2.at(j)) i++,j++;
                  else i++;
        }
        return j == s2.length();
}

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
              string s1, s2;
                cin>>s1>>s2;

                bool yes = solve(s1,s2);
                if(yes) cout<<"YES\n";
                else cout<<"no\n";
           }



return 0;
}