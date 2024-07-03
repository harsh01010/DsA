#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
xor in the range (1 to n):
    there is a pattern
        if n%4==1 ->(1^2^3...^n) = 1
        if n%4==2 =>(1^2^3...^n) = n+1
        if n%4==3 ->(1^2^3...^n) = 0
        if n%4==0 ->(1^2^3...^n) = n
*/

/*
 in given range l to r
 find 1 to l-1
 find 1 to r
  take xor of both the result , since 1 to l-1 will be repeated two times their resultant xor will become zero , and we will have the resultant answer containg xor of l to r.
*/

int oneToNXor(int n)
{
    int x = n % 4;
    return x == 1 ? 1 : (x == 2 ? n + 1 : (x == 3 ? 0 : n));
}

int lToRZor(int l, int r)
{
    return oneToNXor(l - 1) ^ oneToNXor(r);
}

int main()
{

    return 0;
}