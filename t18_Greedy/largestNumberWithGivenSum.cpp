#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

string largestNumber(int n, int sum)
{
    // Your code her
    if (sum > n * 9)
        return "-1";
    string res = "";
    while (sum >= 9)
    {
        sum -= 9;
        res += "9";
    }
    if (sum != 0)
    {
        res += to_string(sum);
    }
    if (res.length() < n)
    {
        while (res.length() != n)
        {
            res += "0";
        }
    }
    return res;
}

int main()
{

    return 0;
}