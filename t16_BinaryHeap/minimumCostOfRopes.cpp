#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// minimum cost of ropes
/*
There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost. Given N size array arr[] contains the lengths of the ropes. 
*/
long long minCost(long long arr[],long long n){
priority_queue<long long,vector<long long>,greater<long long int>>p{arr,arr+n};
long long int res = 0;
    
while(!p.empty())
{
    if(p.size() == 1) return res;
    long long int temp = p.top(); p.pop();
    temp += p.top(); p.pop();
    if(!p.empty())
    p.push(temp);
    
    res += temp;
}
return res;
}
int main()
{
    

    



return 0;
}