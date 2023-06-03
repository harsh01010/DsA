#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void f(int k,int i,int n,vector<int>&temp)
{
    // cout<<i<<"\n";
    if( temp.size()==k && n==0 )
    {for(auto it:temp)cout<<it<<" ";cout<<"\n";    return;}
    if(i>9 || temp.size()>k||n<=0)
        return;
    
    temp.push_back(i);
    f(k,i+1,n-i,temp);
    temp.pop_back();
    f(k,i+1,n,temp);

}
void combinationSum3(int k, int n) {
        vector<int>temp;
        f(k,1,n,temp);
    }
int main()
{
    
    int k = 3 , n = 9;
    combinationSum3(k,n);



return 0;
}