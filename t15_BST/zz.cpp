#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*

10 20 30 50 45 35 60  -> after swapping  50 and 35 the array will be sorted -> 10 20 30 35 45 50 60

10 20 30 25 40 50 60 -> after swapping  30 and 25 the  array will be sorted  -> 10 20 25 30 40 50 60

*/

// how do we get these two values

void func(int arr[],int n)
{
    int prv = INT_MIN, first=-1 , second=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i] < prv)
        {
            if(first == -1)
            {
                first  = prv  ;
            }
            else 
            second = -1;
        }
        prv = arr[i];
    }
}

// we can modify the above function For BST also.



void  FixBst(node*root)
{
    node*pr
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(auto &it:arr) cin>>it;
    f(arr,n);
    for(auto it:arr) cout<<it<<" ";

    return 0;
}