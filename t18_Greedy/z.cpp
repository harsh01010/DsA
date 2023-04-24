#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int f(int n)
{
    string ref = to_string(2147483647);
    string s = to_string(n);
    // reverse(s.begin(),s.end()) , reverse(ref.begin(),ref.end());
    string y1 = s, y2 = ref;
    // reverse(s.begin(),s.end()) , reverse(ref.begin(),ref.end());
    if (y1 > y2 && s.length() >= ref.length())
        return -1;
    int i = s.length() - 1;
    for (; i > 0; i--)
    {
        if (s[i] > s[i - 1])
            break;
    }
    cout << "hello\n";
    // cout<<i<<"\n";
    if (i == 0)
        return -1;
    char dig = s[i - 1];
    int mInd = i;
    for (int j = i + 1; j < s.length(); j++)
    {
        if (s[j] > dig && s[j] < s[mInd])
            mInd = j;
    }
    swap(s[i - 1], s[mInd]);
    sort(s.begin() + i, s.end());
    cout << s << "\n";
    // reverse(s.begin(),s.end());
    y1 = s;
    // reverse(s.begin(),s.end());
    // cout<<"hello\n";
    if (s > ref && s.length() >= ref.length())
        return -1;
    int n1 = stoi(s);
    return n1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = f(n);
        cout << x << "\n";
    }

    return 0;
}