#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
const int dr[] = {0, 0, 1, -1};
const int dc[] = {1, -1, 0, 0};
bool valid(int i, int j, int n)
{
    return i >= 0 && j >= 0 && j < n && i < n;
}
void f(vector<vector<int>> grid, vector<vector<int>> &vis, pair<int, int> src)
{   


    vis[src.first][src.second] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ni = src.first + dr[i];
        int ny = src.second + dc[i];
        if ( valid(ni, ny, grid.size())&&!vis[ni][ny] && grid[ni][ny] != 0)
            f(grid, vis, {ni, ny});
    }
}
bool is_Possible(vector<vector<int>> &grid)
{
    // code here
    pair<int, int> src;
    pair<int, int> dest;
    vector<vector<int>> vis(grid.size(), vector<int>(grid.size(), 0));
    int n = grid.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                src = {i, j};
                vis[i][j] = 1;
            }
            else if (grid[i][j] == 2)
            {
                dest = {i, j};
            }
        }
    }

    f(grid, vis, src);
    return vis[dest.first][dest.second];
}
int main()
{

    int n = 5;
    vector<vector<int>> grid{
        {3, 3, 0, 0},
        {3, 0, 0, 3},
        {3, 3, 3, 3},
        {0, 3, 0, 0},
        {3, 0, 1, 3},
    };
    cout<<"j\n";
    bool x = is_Possible(grid);
    cout<<x<<"\n";

    return 0;
}