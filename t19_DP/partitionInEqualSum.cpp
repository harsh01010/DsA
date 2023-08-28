#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool func(vector<int>arr,int i,int s,vector<vector<int>>&dp)
{
    if(s==0)
        return true;
    if(i==0)
        return arr[0] == s;
    if(dp[i][s] != -1) return dp[i][s];
    
    bool right = func(arr,i-1,s,dp);
    bool left = false;
    if(s>=arr[i])
        left = func(arr,i-1,s-arr[i],dp);
    
    return dp[i][s] = right || left;
}
bool canPartition(vector<int> &arr)
{
	int s = 0;
	for(int i=0;i<arr.size();i++) s+= arr[i];

	if(s%2==1) return false;

	s = s/2;
    vector<vector<int>>memoiz(arr.size(),vector<int>(s+1,-1));
	return func(arr, arr.size()-1, s,memoiz);
}


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
            int y = 0;
            if(arr[i]<=ii)
            y = table[i-1][ii-arr[i]];
            table[i][ii] = x or y;
        }
    }
    return table[arr.size()-1][s];
}

bool canPartition(vector<int>&arr)
{
    int s = 0;
    for(int i=0;i<arr.size();i++) s+=arr[i];

    if(s%2) return false;

    s = s/2;
    vector<int>prev(s+1,0) , curr(s+1,0);

    prev[0] = curr[0] = true;
    if(arr[0] <= s) prev[arr[0]] = true;

    for(int i=1;i<arr.size();i++)
    {
        for(int ii=1;ii<=s;ii++)
        {
            int x = prev[ii];
            int y = 0;
            if(arr[i]<=ii)
            y = prev[ii-arr[i]];
            curr[ii] = x or y;
        }

        prev = curr;
    }
    return prev[s];
}


int main()
{




return 0;
}