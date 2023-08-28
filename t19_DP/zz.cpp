#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
TABULATION:
create the dp array same size and value of as the memoization
-> write base cases by looking at the base cases of the memoization
-> look at the number of states(ind,target) and write the nested loops accordingly , into up down or top down manner.
-> copy paste the recurrence as it is.
*/
bool canPartition(vector<int>&arr)
{
    int s = 0;
    for(int i=0;i<arr.size();i++) s+=arr[i];

    if(s%2) return false;

    s = s/2;
    vector<vector<int>>table(arr.size(),vector<int>(s+1,0));
    for(int i=0;i<arr.size();i++) table[i][0] = true;
    if(arr[0] <= s) table[0][arr[0]] = true;

    for(int i=1;i<arr.size();i++)
    {
        for(int ii=1;ii<=s;ii++)
        {
            int x = table[i-1][ii];
            int y = table[i-1][ii-arr[i]];
            table[i][ii] = x or y;
        }
    }
    return table[arr.size()-1][s];
}

int main()
{
    



return 0;
}