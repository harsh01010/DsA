#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

const int CHAR = 256;

bool solve(string s1 , string s2)
{
       int arr[CHAR] = {0};

         for(int i=0;i<s1.length();i++)
         {
               arr[s1[i] - 'a']++;
               arr[s2[i] - 'a']--;
         }
         for(int i=0;i<256;i++) 
         {
             if(arr[i] != 0) return false;
         }
         return true;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    int t;
     cin>>t;
      while (t--)
      {
           string s1 ,s2; cin>>s1>>s2;

           bool ans = solve(s1,s2);
           if(ans) cout<<"YES\n";
           else cout<<"NO\n";
      }
      



return 0;
}