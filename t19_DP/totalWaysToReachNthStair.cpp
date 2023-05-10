#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// total ways to reach nth stair

//only recursion
int climb_recur(int n)
{
    if(n==1||n==0)
        return 1;
    return climb_recur(n-1) + climb_recur(n-2); // one extra step, we will get by n =0.
}

// memoization
int climb_memoized(int n,vector<int>&gati)
{
    if(gati[n] == -1)
    {
        if(n<=1)
            return gati[n] = 1;
        
        int res = climb_memoized(n-1,gati) + climb_memoized(n-2,gati);
        gati[n] = res;
    }
    return gati[n];
}

//tabulation
int climb_tabu(int n)
{
    vector<int>arr(n+1,-1);
    arr[0] = 1 , arr[1] = 1;
    for(int i=2;i<=n;i++)
        arr[i] = arr[i-1] + arr[i-2];
    
    return arr[n];   
}

//spcae optimized
int climb_optimized(int n)
{
    int curr = 1 ,prev = 1;
    for(int i=2;i<=n;i++)
    {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    return curr;
}

int main()
{

    int n;
    cin>>n;
    vector<int>arr(n+1,-1);
    cout<<climb_memoized(n,arr)<<" "<<climb_tabu(n)<<" "<<climb_optimized(n)<<" "<<climb_recur(n)<<" \n";
return 0;
}