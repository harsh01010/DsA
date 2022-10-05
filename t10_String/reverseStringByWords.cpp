#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void reverse(string &s , int lo , int hi)
{
       while(lo < hi)
       {
           swap(s[lo] , s[hi]);
           lo++ , hi--;
       }
}

void solve(string &s)
{
      int start = 0;
       int n = s.length();
         // reversing all the words of the string.
      for(int end = 0 ; end<n;end++)
      {
        if(s[end] == ' ')
         {
              reverse(s,start,end-1);
              start = end+1;

         }
      }
      //for the last word space will not be encountered
      reverse(s,start,n-1);
    
        // now revering the resulting string.

        reverse(s,0,n-1);
        
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

      int t;
        cin>>t;
        cin.ignore();
         while(t--)
        {
              string s;
              getline(cin,s);
              
               solve(s);
               cout<<s<<"\n";
        }



return 0;
}