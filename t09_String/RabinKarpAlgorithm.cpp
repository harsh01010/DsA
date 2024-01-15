#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void rabinKarpPatternSearch(string s, string pat)
{
    int n = s.length(), m = pat.length();
    if (n < m)
    {
        cout << "1\n";
        return;
    }
    if (n == m)
    {
        string val = s == pat ? "1" : "-1";
        cout << val << "\n";
        return;
    }
    /*
    In this implementation , a simple hash function is used(a=1,b=2,c=3...),
    it may cause too many spurious hits , we can use other hash function to avoid the spurious hits.
        e.g:
            h("abc") = 1*d^2 + 2*d^1 + 3*d^0
            rolling:
                t(i+1) = d*(t(i)-txt[i]*d^m-1) + txt[i+m]
                explaination:
                  val(i) =   x*d^m + y*d^m-1 + z*d^m-2.....+ p*d^2+ q*d^1 + r

                  val(i+1) = x*d^m + y*d^m-1 + z*d^m-2.....+ p*d^2+ q*d^1 + r  - x*d^m + curr
                           =  d*(val(i)-txt[i]*d^m-1) + txt[i+m]
    we are calculating the hash values of each window using the rolling hash method.
    */
    int hs = 0, ps = 0;
    for (int i = 0; i < m; i++)
    {
        hs += (s[i] - 'a' + 1);
        ps += (pat[i] - 'a' + 1);
    }

    // hs = hs-(s[i-1]+1) + (s[i+m]+1)
    for (int i = 0; i <= n - m; i++)
    {
        if (hs == ps)
        {
            bool flag = true;
            for (int j = 0; j < m; j++)
            {
                if (s[i + j] != pat[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {

                cout << to_string(i + 1) << " ";
            }
        }
        if (i < n - m)
        {
            hs += (s[i + m] + 1 - s[i] - 1);
        }
    }
    cout << "\n";
}

int main()
{

    string s = "", pat = "";
    cout << "Enter the text string and the pattern string: ";
    getline(cin, s);
    getline(cin, pat);
    rabinKarpPatternSearch(s, pat);

    return 0;
}