#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
longest common subet:
use match , not match logic.
in lcs we used: if(s[i] == t[j]) 1 + f(i-1,j-1) --> it will be used for substring also
                else max(f(i-1,j),f(i,j-1))  --> it can't be used for substring as it my skip characters .
*/

// using tabulation
/*
create a table as created in lcs , but in case of not match push simple 0 , and return maximum value present in the table
*/

int longestCommonSubstring(string s, string t)
{
    int n = s.length() , m = t.length();
    vector<vector<int>>table(n+1,vector<int>(m+1,0));

    int res = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1] == t[j-1]) {table[i][j] = 1 + table[i-1][j-1];

            res = max(res,table[i][j]);}
        }
    }

    return res;


}

int main()
{





return 0;
}