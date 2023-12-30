#include<bits/stdc++.h>
#define ll long long
using namespace std;
int naivePartition(int  arr[],int lo , int hi,int k)
{
    vector<int>part1;
    vector<int>part2;
    int ele = arr[k];
     for(int i=lo;i<=hi;i++)
     {     if(i==k) continue;
          if(arr[i] > ele) part2.push_back(arr[i]);
          else part1.push_back(arr[i]);
     }
     int p1 = 0 , p2=0 , i=lo;
      while(p1 < part1.size()) arr[i++] = part1[p1++];
      int res = i;
      arr[i++] = ele;
       while(p2 < part2.size()) arr[i++] = part2[p2++];
       return res;    
}
int main()
{

      int n;
        cin>>n;
         int  arr[n];
         for(int &it:arr) cin>>it;
         int k; cin>>k;

    int  ind =   naivePartition(arr,0,n-1,k);
    cout<<ind<<" \n";

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}