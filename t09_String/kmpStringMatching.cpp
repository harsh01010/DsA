#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
proper prefix and  proper suffix :
 - proper means their  lengths can't  be equal to the string, it must be less than the  string length.
 e.g:
        "abc":
            proper prefixes-> "","a","ab"
            proper suffixes-> "","c","bc

We have to compute the lps(longest proper prefix suffix array) array(lps[i], it stores the value of largest proper prefix upto index i such that it is  also a proper suffix.)


*/

vector<int> search(string pat, string txt)
{
    // code here
    int n = txt.length(), m = pat.length();
    // calculating the longest prefix suffix
    int len = 0, i = 1;
    vector<int> lps(m, 0);
    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            lps[i] = len + 1;
            i++, len++;
        }
        else
        {
            if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }

    // finding the all matching indexes
    vector<int> res;
    int j = 0;
    for (int i = 0; i < n;)
    {
        if (txt[i] == pat[j])
        {
            j++, i++;
            if (j == m)
            {
                res.push_back(i - j + 1);
                j = lps[j - 1];
            }
        }
        else
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }

    return res;
}
int main()
{

    return 0;
}