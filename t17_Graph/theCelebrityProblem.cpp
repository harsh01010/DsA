#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*-> M[i][j]  , means i knows j

->let's consider each person as vertex of graph.

->Now,if there is a celebrity then it should be known to everybody , but it should not know anybody.

->In,otherwords we can say the difference of indegree and outdegree of celebrity must be exactly (n-1).

                    indegree-outdegree = n-1
                    indegree = n-1 , outdegree =0

    similar problem :- find the town judge(leetcode)
*/

int celebrity(vector<vector<int>> &M, int n)
{
    int degDiff[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (M[i][j] == 1)
            {
                degDiff[i] -= 1;
                degDiff[j] += 1;
            }
    }

    for (int i = 0; i < n; i++)
        if (degDiff[i] == n - 1)
            return i;

    return -1;
}
int main()
{

    return 0;
}