#include <bits/stdc++.h>
#define ll long long
using namespace std;

double funcn(int arr1[], int arr2[], int n1, int n2)
{
  int l = 0, h = n1 ;
  while (l <= h)
  {
    int i1 = (l + h) / 2;
    int i2 = (n1 + n2 + 1) / 2 - i1;
     
     int max1 = (i1 == 0) ? INT_MIN : arr1[i1-1];
     int min1 = (i1 == n1) ? INT_MAX : arr1[i1];
     int max2 = (i2 == 0) ? INT_MIN : arr2[i2-1];
     int min2 = (i2 == n2) ? INT_MAX : arr2[i2];
     
     if(max1 <= min2 and max2 <= min1)
     {
         if( (n1+n2)&1 ) 
         {
            return max(max1,max2);
         }
         else
          {
             return  double((max(max1,max2) + min(min1,min2))/2);
          }
     }

     else if( !(max1 <= min2)) h = i1-1;
     else l = i1+1;
  }
  return (0);
}

int main()
{

  int n1, n2;
  cin >> n1 >> n2;
  int arr[n1], arr2[n2];

  for (int i = 0; i < n1; i++)
    cin >> arr[i];
  for (int j = 0; j < n2; j++)
    cin >> arr2[j];
  double median;
  if (n1 <= n2)
    median = funcn(arr, arr2, n1, n2);
  else
    median = funcn(arr2, arr, n2, n1);
    cout<<median<<" \n";

  return 0;
}