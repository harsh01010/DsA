#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


// fibonacci using memoization(top down)
int fibo(int n,vector<int>&fib)
{
    if(fib[n] == -1){
    int res;
    if(n==0 || n==1)
        res = n;
    else
        res = fibo(n-1,fib) + fibo(n-2,fib);
    
    fib[n] = res;
    }
    
    return fib[n];
}

//fibonacci using tabulation (bottom up)
int fibo_tab(int n)
{
    int dp[n+1];
    dp[0] = 0; dp[1] = 1;
    for(int i=2;i<n;i++)
    {
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n-1];
}

// space optimized
int fibo_optimized(int n)
{
    int curr = 1 , last = 0;
    for(int i=2;i<n;i++)
    {
        int temp = curr;
        curr = curr + last;
        last = temp;
    }
    return curr;
}

int main()
{


    int n; cin>>n;
    vector<int>fib(n,-1);
    cout<<fibo(n-1,fib)<<endl;
    

return 0;
}