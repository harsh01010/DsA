#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int PrintLcs(string s1, string s2)
{
 int n = s1.length() , m = s2.length();

 vector<vector<string>>dp(n+1,vector<string>(m+1,""));

 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=m;j++)
    {
        if(s1[i-1] == s2[j-1])
        {
            dp[i][j] = dp[i-1][j-1];
            dp[i][j].push_back(s1[i-1]);
        }
        else{
            string x = dp[i-1][j] , y = dp[i][j-1];
            dp[i][j] = x.length() > y.length() ? x :y;
        }
    }
 }

 cout<<dp[n][m]<<"\n";
 return dp[n][m].length();



    // method 2:
    vector<vector<int>>tab(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j]=1+tab[i-1][j-1];
            }
            else
            {
                tab[i][j] = max(tab[i-1][j],tab[i][j-1]);
            }
        }
    }

    string res;
    int i = n , j = m;
    while(i>0 && j>0)
    {
        int vd = tab[i-1][j-1];
        int vt = tab[i][j-1];
        int vl = tab[i-1][j];
        if(s1[i-1] == s2[j-1])
        {
            res.push_back(s1[i-1]);
            i-- , j--;
        }
        if(tab[i-1][j > tab[i][j-1]])  i--;
        else j--;
    }
    cout<<res<<"\n";
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    string ans;
    cout<<lcs(s1,s2)<<"\n";

    return 0;
}