#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

double getAns(double x, long long n)
{
    if (n == 0)
        return 1;

    double curr = getAns(x, n / 2);
    if (n % 2)
        return curr * curr * x;
    return curr * curr;
}
double myPow(double x, int n)
{

    if (n < 0)
        return 1 / getAns(x, n);
    return getAns(x, n);
}
int main()
{

    return 0;
}