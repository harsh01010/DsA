#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int firstMatch(string a , string b)
{
    for(int i=0;i<a.length();i++)
        if(a[i] == b[0]) return i;
    return -1;
}

int giveCount(string A , string B)
{
    int ind = firstMatch(A,B);
    if(ind==-1) return -1;
    int res = 1;
    for(int i=0;i<B.length();i++)
    {
        if(ind==A.length())
        res++, ind%=A.length();

        if(A[ind] != B[i]) return -1;
        ind++;
        
    }
    return res;
}

int main()
{

string a  ,b;
cin>>a;
cin>>b;

cout<<giveCount(a,b)<<"\n";
    



return 0;
}