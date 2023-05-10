#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void f(int n)
{
    vector<vector<int>>res(n,vector<int>(n,0));
    int j = 1;
    int top = 0 , bottom = n-1 , left = 0 , right = n-1;

    while(top<=bottom && left<=right)
    {
        // left to right
        for(int i = left;i<=right;i++)
            res[top][i] =  j++;
        top++;

        //top to bottom
        for(int i=top;i<=bottom;i++)
            res[i][right] =j++;
        right--;

        //right to left
        if(top<=bottom)
        {
            for(int i = right;i>=left;i--)
                res[bottom][i] = j++;
            bottom--;
        }

        //bottom to top
        if(left<=right)
        {
            for(int i = bottom;i>=top;i--)
                res[i][left] = j++;
            left++;
        }
    }
}

int main()
{

    int n; cin>>n;
    f(n);
    



return 0;
}