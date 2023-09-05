#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

//longest palindromic substring -> non dp solution
string f(string A)
{
     int n = A.length();
        int curr = 0;
        int s = 0 , e = 0;
        for(int i=0;i<n;i++)
        {
            int l = i , r = i;
            while(l>=0 && r<n &&A[l] == A[r]) l-- , r++;
            int len = r-l-1;
            if(curr <= len)
                {
                    curr = len , s = l+1 , e = r-1;
                }

        }

        for(int i=0;i<n-1;i++)
        {
            int l = i , r = i+1;
            while(l>=0 && r<n && A[l] == A[r]) l-- ,r++;
            int len = r-l-1;
            if(curr <= len)
                {
                    curr = len , s= l+1 , e = r-1;
                }
        }

        string ans;
        for(int i = s;i<=e;i++)
            ans.push_back(A[i]);
        
        return ans;
}

int main()
{

    



return 0;
}