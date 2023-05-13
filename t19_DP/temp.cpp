#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int fibRec(int n)
{
    if(n==0||n==1)
        return n;
    int x = fibRec(n-1) + fibRec(n-2);
    return x;
}

int fibOptimized(int n)
{
    int x = 0, y = 1;
    for(int i = 2; i<=n;i++)
    {
        int t = y;
        y += x;
        x = t;
    }
    return y;
}


int main()
{
    int n;
    cin>>n;

    cout<<"using the 2nd funcion: "<<fibOptimized(n)<<"\n";
    cout<<"using the 1st function: "<<fibRec(n)<<"\n";



return 0;
}