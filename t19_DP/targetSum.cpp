#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
target sum: Similar to partitions with given difference
+ ,- ===> get target

s1 - s2 = T
s1 + s2 = S

s = (S-T)/2;
*/

int rec(vector<int>arr,int i,int k)
{
    if(i==0)
    {
        
        if(k==0 && arr[0] == 0) return 2;
        if(k==0 || arr[0] == k) return 1;
        return 0;
    }

    int ni = rec(arr,i-1,k);
    int ii = 0;
    if(arr[i] <= k)
        ii = rec(arr,i-1,k-arr[i]);
    return ni + ii;

}

int targetSum(vector<int>arr,int n,int target)
{
    int S = 0;
    for(auto it:arr)
    {
        S += it;
    }

    S -= target;
    if(S<0) return 0;
    if(S%2) return 0;
    S /= 2;
    // using recursion (can be memoized)
    //return rec(arr,n-1,S);

    //using tabulation (similarly space optimzation can be written)
    vector<vector<int>>tab(n,vector<int>(S+1,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=S;j++)
        {
            if(i==0)
            {
                if(arr[0]==j)   tab[i][j]++;
                if(j==0) tab[i][j]++;
            }
            else if(j==0)   tab[i][j]++;
            else{
                int ni = tab[i-1][j];
                int ii = 0;
                if(arr[i]<=j)
                {
                    ii = tab[i-1][j-arr[i]];
                }
                tab[i][j] = ni+ii;
            }
        }
    }
    return tab[n-1][S];
}

int main()
{

int n,target;

cin>>n>>target;

vector<int>arr;
for(int i=0;i<n;i++)
{
    int x; cin>>x;
    arr.push_back(x);
}

cout<<targetSum(arr,n,target)<<"\n";




return 0;
}