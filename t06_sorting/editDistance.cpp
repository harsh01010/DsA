#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// edit distance

/*
make s and t equal

3 operations can be performed
1. insert
2. delete
3. replace

*/

int f(string word1, string word2, int i, int j, vector<vector<int>> &arr)
{
    if (i == 0)
        return j; // if i<0 used then return j+1
    if (j == 0)
        return i; // if j<0 used then return i+1
    if (arr[i][j] != -1)
        return arr[i][j];
    if (word1[i - 1] == word2[j - 1])
        return arr[i][j] = 0 + f(word1, word2, i - 1, j - 1, arr);

    int x = f(word1, word2, i - 1, j, arr) + 1;
    int y = f(word1, word2, i, j - 1, arr) + 1;
    int z = f(word1, word2, i - 1, j - 1, arr) + 1;

    return arr[i][j] = min(x, min(y, z));
}
int minDistance(string word1, string word2)
{

    // vector<vector<int>>arr(word1.size()+1,vector<int>(word2.size()+1,-1));
    // return f(word1,word2,word1.size(),word2.size(),arr);

    vector<vector<int>> table(word1.size() + 1, vector<int>(word2.size() + 1, 0));
    for (int i = 0; i <= word1.size(); i++)
        table[i][0] = i;
    for (int j = 0; j <= word2.size(); j++)
        table[0][j] = j;

    for (int i = 1; i <= word1.size(); i++)
    {
        for (int j = 1; j <= word2.size(); j++)
        {
            if (word1[i - 1] == word2[j - 1])
                table[i][j] = table[i - 1][j - 1];
            else
                table[i][j] = 1 + min(table[i - 1][j], min(table[i][j - 1], table[i - 1][j - 1]));
        }
    }
    return table[word1.size()][word2.size()];
}

int main()
{

    return 0;
}