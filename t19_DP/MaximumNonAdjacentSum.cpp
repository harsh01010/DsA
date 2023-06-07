#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// maximum sum of non adjacent elements

// recursive
int f(vector<int>&arr,int i)
{
    if(i == arr.size()-1)
        return arr[i];

    int x = arr[i];
    if(i+1<arr.size()-1)
    x = arr[i] + f(arr,i+2);
    int y = f(arr,i+1);

    return max(x,y);
}


// memoization

int f2(vector<int>&arr,vector<int>&dp,int i)
{
    if(dp[i] !=-1)
        return dp[i];

    
    int x = arr[i] + f2(arr,dp,i+2); // since we have already defined dp[i-1] and dp[i-2] , hence we need to care about the i+2 being greater than the array size
    int y = f2(arr,dp,i+1);

    return dp[i]=max(x,y);

}

int f1(vector<int>arr)
{   int i=0;
    vector<int>dp(arr.size(),-1);
    dp[arr.size()-1] = arr[arr.size()-1];
    if(arr.size()>1)
    dp[arr.size()-2] = max( arr[arr.size()-1],arr[arr.size()-2]);
    
    int x = f2(arr,dp,i);
    for(auto it:dp)
        std::cout<<it<<" ";
    std::cout<<"\n";
    return x;

}

//Tabulation
int f3(vector<int>arr)
{
    vector<int>dp(arr.size(),-1);
    dp[arr.size()-1] = arr[arr.size()-1];
    dp[arr.size()-2] = max(arr[arr.size()-1],arr[arr.size()-2]);

    if(arr.size()<3)
        return dp[0];
    for(int i = arr.size()-3;i>=0;i--)
    {
        dp[i] = max(arr[i]+dp[i+2],dp[i+1]);
    }

    return dp[0];
}

// space optimized
int f4(vector<int>arr)
{
    int x1 = arr[arr.size()-1];
    if(arr.size()==1)return x1;
    int x2 = max(arr[arr.size()-1],arr[arr.size()-2]);
    int res = max(x1,x2);
    if(arr.size()<3) return res;
    for(int i = arr.size()-3;i>=0;i--)
    {
    
    res= max(arr[i]+x1 , x2);
    x1 = x2;
    x2 = res;
    }
    return res;
}

int main()
{
    
    vector<int>arr = {2,1,1,2};
    std::cout<<f(arr,0)<<"\n";
    std::cout<<f1(arr)<<'\n';
    std::cout<<f3(arr)<<"\n";
    std::cout<<f4(arr)<<"\n";




return 0;
}