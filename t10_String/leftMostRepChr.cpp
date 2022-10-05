#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

string solve(string s)
{
      int arr[25] = {0};

      for(int i=0;i<s.length();i++)
         arr[s.at(i) - 'a']++;

       for(int i=0;i<s.length();i++)
       {
           if(arr[s[i]-'a'] >1 )
           {
                string ans; ans.push_back(s[i]);
                return  ans;
           }
       }

       return "-1";

      
}

// anoter approach

char solve2(string s)
{
     bool arr[25] = {false};
           char res = '#';  // returns # if no such element is present
        for(int i= s.length()-1;i>=0;i--)
        {
              if(arr[s[i] - 'a']) res = s[i];
              else arr[s[i]-'a'] = true;

        }
        return res;
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
                 //string ans = solve(s);
                 char ans = solve2(s);

                 cout<<ans<<"\n";

          }



return 0;
}