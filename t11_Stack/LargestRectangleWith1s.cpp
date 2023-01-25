#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
   Largest rectangle with all 1s
   {1,1,1,1,1
    1,0,1,0,0
    1,0,0,0,0
    1,1,1,1,1  |
    1,1,1,1,1  |    ans = 15 1s
    1,1,1,1,1  |
    }


   use max rectangle histogram to solve this problem
   
    row wise find the maximum rectangle.
    by moving to next row , if the element is 1 then add the previous row value which corresponds to this
    else if it is 0 the take 0 only.
*/

vector<int> prevSmall(int arr[] , int n)
{
      vector<int>res;
      stack<int>stk;
      for(int i=0;i<n;i++)
      {
            while(!stk.empty() and arr[stk.top()] >= arr[i]) stk.pop();

             int x = stk.empty() ? -1 : stk.top();
             stk.push(i);
             res.push_back(x);
      }
      return res;
}

vector<int> nextSmall(int arr[] , int n)
{
     vector<int>res;
     stack<int>stk;
     for(int i=n-1;i>=0;i--)
     {
           while(!stk.empty() and arr[stk.top()] >= arr[i]) stk.pop();

           int x = stk.empty() ? n : stk.top();
           stk.push(i);
           res.push_back(x);
     }
     reverse(res.begin() , res.end());
     return res;
}
 int rectangle(int arr[] , int n)
 {
    vector<int>ns = nextSmall(arr , n);
    vector<int>ps = prevSmall(arr , n);
     int res = 0;
      for(int i=0;i<n;i++)
      {
          int curr = arr[i]*(ns[i]-ps[i]-1);
          res = max(curr , res);
      }
      return res;
 }
int main()
{

 
    int n , m ; cin>>n>>m;
     int mat[n][m];
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<m;j++)
        {
           cin>>mat[i][j];
        }
       
    }
   
int res = rectangle(mat[0] ,m);

 for(int i=1;i<n;i++)
 {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j] == 1)
             { mat[0][j]+=mat[i][j];}
             else mat[0][j] = 0;
        }
        res = max(res , rectangle(mat[0] , m));
 }
 cout<<res<<"\n";


   



return 0;
} 