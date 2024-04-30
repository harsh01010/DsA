#include <bits/stdc++.h>
using namespace std;

void func(int *s, int n)
{
    //  int siz = pow(2 , /*s.length() */ n);
    int siz = (1 << n);
    for (int i = 0; i < siz; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << s[j];
        }
        cout << "\t";
    }
}
int main()
{
    string s;
    int arr[3] = {1, 2, 3};
    cin >> s;
    func(arr, 3);

    // power set - set of all subsets.
    return 0;
}