#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

char solve(string s)
{
    int arr[25] = {0};

       for(int i=0;i<s.length();i++)
       {
          arr[s[i]-'a']++;
       }

       for(int i=0;i<s.length();i++)
       {
          if(arr[s[i]-'a'] == 1) return s[i];
       }

       return '#';
}

// another approach

char solve2(string s)
{
       vector<int>arr(25,-1);
     //   for(auto it:arr) cout<<it<<" ";cout<<"\n";
       for(int i=0;i<s.length();i++)
       { 
            if(arr[s[i]-'a'] == -1) arr[s[i]-'a'] = i;
             else arr[s[i]-'a'] = -2;
       }

        int res = INT_MAX;

         for(int i=0;i<25;i++)
         {
               if(arr[i] >= 0) res = min(res ,arr[i]);
         }
         return res == INT_MAX ? '#' : s[res];

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
                  string s;
                    cin>>s;
                   // char ans = solve(s);
                    char ans = solve2(s);
                    if(ans != '#') cout<<ans<<"\n";
                    else cout<<"no non repeating element\n";

            }



return 0;
}