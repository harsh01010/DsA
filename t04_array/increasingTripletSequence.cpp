#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

  bool increasingTriplet(vector<int>& nums) {
        int left = INT_MAX;
        int mid = INT_MAX;
        for(int num:nums)
        {
            if(num<=left)
                left = num;
            else if(num<=mid)
                mid = num;
            else return true;
        }
        return false;
    }

int main()
{
  int n; vector<int>arr;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;cin>>x;
    arr.push_back(x);
  }
  cout<<increasingTriplet(arr);

  



return 0;
}