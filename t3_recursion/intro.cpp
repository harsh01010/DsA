#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
segmentatiofn fault -> stack overflow
*/

void f(int &n,int cnt = 0)
{
    if(cnt == n) return;
    cout<<"Name\n";
    f(n,cnt+1);
}


//backtracking
void f2(int n)
{
    if(n<1) return;
    f2(n-1);
    cout<<n<<"\n";
}
void f3(int n)
{
    if(n<1) return;
    printf("%d\n",n);
    f2(n-1);
}

// sum of first n natural numbers
// using parameterized recursion
void para(int n , int &s)
{
    if(n<1)
        return;
    s += n;
    para(n-1,s);
}
// using functional recursion
int func(int n)
{
    if(n<1)
        return 0;
    return n + func(n-1);
}
int main()
{
    //int n; cin>>n;
    //f(n);
    //f2(10);
    //f3(10);
    int n; cin>>n;
    int sum = 0;
    para(n,sum); cout<<sum<<"\n";
    cout<<func(n)<<"\n";


return 0;
}