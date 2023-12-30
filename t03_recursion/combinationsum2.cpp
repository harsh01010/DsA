#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void f(vector<int>arr,int i,vector<int>&temp,vector<vector<int>>&res,int sum,int target)
    {
        if(target == sum)
        {
            res.push_back(temp);
             return;
           
        }
        if(sum>target) return;
        if(i==arr.size())
         return;
            temp.push_back(arr[i]);
            f(arr,i+1,temp,res,sum+arr[i],target);
            temp.pop_back();
            while(i+1<arr.size() && arr[i]==arr[i+1]) i++;
            f(arr,i+1,temp,res,sum,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>res;
        int i= 0;
        int sum = 0;
        sort(candidates.begin(),candidates.end());
        f(candidates,i,temp,res,sum,target);
        return res;
    }
int main()
{
  int target = 27;
  vector<int>candidates = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
  combinationSum2(candidates,  target);


  return 0;
}