#include<bits/stdc++.h>
#define ll long long
using namespace std;

double help(int a1[],int n1,int a2[],int n2)
{
      int lo = 0 , hi = n1;
      double median;
      while(lo<hi)
      {  
          int i1 = (lo+hi)/2;
          int i2 = (n1+n2)/2 -i1;

           int a1max , a1min ,a2max, a2min;
          a1max  =  i1 == 0 ? INT_MIN : a1[i1-1]; 
          a1min = i1 == n1 ? INT_MAX : a1[i1];
          a2max = i2 == 0 ? INT_MIN : a2[i2-1];
          a2min = i2 == n1 ? INT_MAX : a2[i2];

          if( a1max <= a2min and a2max <= a1min)
          {
                 if( (n1+n2)%2 == 0)
                 {
                     median = ( max(a1max,a2max) + min(a1min,a2min) ) /2;
                     return median;
                 }
                 else return max(a1max,a2max);
          }

          else if(a1max > a2min)
          {
              hi = i1-1;
          }
          else lo = i1+1;

      }
      return -1;
}

 double findmedian(int a1[],int n1,int a2[],int n2)
 {
       if(n1>n2) return help(a2,n2,a1,n1);
       return help(a1,n2,a2,n2);
 }
int main()
{

         int n1 ,n2;
          cin>>n1>>n2;

          int a1[n1],a2[n2];for(int &it:a1) cin>>it;for(int &i:a2) cin>>i;

          double median = findmedian(a1,n1,a2,n2);

      cout<<median<<" ";


return 0;
}