#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int lcs(string s1, string s2, int i1, int i2,string &ans)
{
    if(i1 <0 || i2<0) return 0;
    if (s1[i1] == s2[i2])
    {  ans.push_back(s1[i1]);  return 1 + lcs(s1, s2, i1 - 1, i2 - 1,ans);}
    int ans1 = lcs(s1,s2,i1-1,i2,ans);
    string temp1 = ans;
    int ans2 = lcs(s1,s2,i1,i2-1,ans);
    string temp2 = ans;
    if(ans1 > ans2) 
    {
        ans = temp1;
        return ans1;
    }
    else return ans2;

    
}

int main()
{

    string s1, s2;