#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
don't use extra visited array to know the status , from original matrix  we can identify.
*/
bool valid(int i, int j, int n, int m)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {-1, 1, 0, 0};

void floodFill(vector<vector<int>> &res, int sr, int sc, int inti, int newColor)
{
    if (!valid(sr, sc, res.size(), res[0].size()) || res[sr][sc] == newColor || res[sr][sc] != inti)
        return;
    if (res[sr][sc] == inti)
        res[sr][sc] = newColor;

    for (int i = 0; i < 4; i++)
    {
        int nsr = sr + dx[i];
        int nsc = sc + dy[i];
        floodFill(res, nsr, nsc, inti, newColor);
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    vector<vector<int>> res = image;
    int inti = image[sr][sc];
    floodFill(res, sr, sc, inti, newColor);

    return res;
}
int main()
{

    return 0;
}