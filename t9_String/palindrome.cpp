#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


bool palindrome(string s)
{
       int i=0 , j=s.length()-1;
       while(i<j)
       {
           if(s[i] != s[j]) return false;
           i++ ,j--;
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
          while(t--)
          {
              string s;
                cin>>s;

                if(palindrome(s))cout<<"it is a palindrome stirng\n";
                else cout<<"is is not a palindrome string\n";

          }



return 0;
}