#include <iostream>
#define ll long long
#define REP(a, n) for (long long int i = a; i < n; i++)
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 2;
    for (; i * i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " "; // dhyan dene wali baat, number ke factors pair me hote hai --> i , n / i --> agar i n ka factor hai to n/i bhi hoga.
    }

    for (; i >= 2; i--)
    {
        if (n % i == 0)
        {

            cout << n / i << " ";
        }
    }

    return 0;
}

//  number ke factors pair me hote hai --> i , n / i --> agar i n ka factor hai to n/i bhi hoga.

/*******************************************************************************
Find all Prime factors of check for a prime number using trial division method:
*********************************************************************************/
int sumOfPowers(int a, int b)
{

    int res = 0;
    for (int i = a; i <= b; i++)
    {
        int curr = i;
        while (curr % 2 == 0)
        {
            res++;
            curr /= 2;
        }
        for (int j = 3; j * j <= curr; j += 2)
        {
            while (curr % j == 0)
            {
                res++;
                curr /= j;
            }
        }
        if (curr > 1)
        {
            res++;
        }
    }

    return res;
}
