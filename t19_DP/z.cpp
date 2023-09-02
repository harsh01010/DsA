#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int lcs(string s1, string s2, int i1, int i2)
{
    if(i1 <0 || i2<0) return 0;
    if (i1 == 0 && i2 == 0)
    {
        return s1[i1] == s2[i2];
    }
    if (s1[i1] == s2[i2])
        return 1 + lcs(s1, s2, i1 - 1, i2 - 1);
    int ans1 = (s1,s2,i1-1,i2);
        return 0 + max( lcs(s1,s2,i1-1,i2),lcs(s1,s2,i1,i2-1));
    
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    cout<<lcs(s1,s2,s1.length()-1,s2.length()-1);


    return 0;
}