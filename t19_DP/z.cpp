#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int uniquePaths(int &n,int &m,int i,int j)
{
    if(i==j==0)
    {
        return 0;
    }

    int x = 0, y = 0;
    if(i-1 >= 0)
        x = 1 + uniquePaths(n,m,i-1,j);
    if(j-1 >=0 )
        y = 1 + uniquePaths(n,m,i,j-1);
    
    return x+y;


}

int main()
{
    



return 0;
}