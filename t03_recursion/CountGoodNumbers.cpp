// 1922
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

long long getAns(long long x, long long n)
{
    if (n == 0)
        return 1;
    long long curr = getAns(x, n / 2) % 1000000007;
    curr = (curr * curr) % 1000000007;
    if (n % 2)
        return (curr * x) % 1000000007;
    return curr;
}
int countGoodNumbers(long long n)
{
    return (getAns(5, (n + 1) / 2) * getAns(4, n / 2)) % 1000000007; // count at each position(5,4) and multiply
}
int main()
{

    return 0;
}