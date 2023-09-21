#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
......
*/

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> table(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            for (int k = 1; k <= 2; k++)
            {
                if (!j)
                    table[i][j][k] = max(-prices[i] + table[i + 1][1 - j][k], table[i + 1][j][k]);
                else if (j)
                    table[i][j][k] = max(prices[i] + table[i + 1][1 - j][k - 1], table[i + 1][j][k]);
            }
        }
    }

    return table[0][0][2];
}

int main()
{

    return 0;
}