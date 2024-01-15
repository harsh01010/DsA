#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// it works only when the pattern has distinct characters
void solve(string s, string p)
{
  int n = s.length(), m = p.length();
  //  cout<<n<<" "<<m<<"\n";
  for (int i = 0; i <= n - m;)
  {
    int j;
    for (j = 0; j < m; j++)
      if (s[i + j] != p[j])
        break;
    // cout<<j<<" "<<m<<"\n";
    if (j == m)
      cout << i << " ";
    if (j == 0)
      i++;
    else
      i = i + j;
  }
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s, p;
    getline(cin, s);
    getline(cin, p);
    // cout<<p.length()<<"\n";
    // cout<<s<<" "<<p<<"\n";
    solve(s, p);
  }

  return 0;
}