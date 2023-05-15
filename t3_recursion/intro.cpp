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
// reverse an array using functional recursion
void rev(vector<int>&arr,int s ,int e)
{
    if(s>=e)
        return;
    swap(arr[s],arr[e]);
    rev(arr,s+1,e-1);
}

//multiple recursion calls
//print all subsequences (subsequence follows order)
/*
    f(ind , []):
        if(ind >= n):
            print([])
            return
        [].add(arr[ind])
        f(ind+1,[])
        [].remove(arr[ind])
        f(ind+1,[])  
*/
void f22(int i , vector<int>arr,vector<int>&res)
{
    if(i>= arr.size())
    {
        for(auto it:res) cout<<it;cout<<"\n";
        return;
    }
    res.push_back(arr[i]);
    f22(i+1,arr,res);
    res.pop_back();
    f22(i+1,arr,res);
}
// print subsequences with sum k
void f33(int i ,vector<int>arr,vector<int>&res, int k,int &s)
{
    if(i>=arr.size())
    {
        if(s == k)
        {
            for(auto it:res)
                cout<<it;cout<<"\n";
        }
        return;
    }
    s += arr[i];
    res.push_back(arr[i]);
    f33(i+1,arr,res,k,s);
    s -= arr[i];
    res.pop_back();
    f33(i+1,arr,res,k,s);
}
int main()
{
    //int n; cin>>n;
    //f(n);
    //f2(10);
    //f3(10);
    //int n; cin>>n;
    //int sum = 0;
    //para(n,sum); cout<<sum<<"\n";
    //cout<<func(n)<<"\n";
    // vector<int>arr = {1,2,3,4,5};
    // rev(arr,0,arr.size()-1);
    // for(auto it:arr)
    //     cout<<it<<" ";
    // vector<int>arr = {1,2,3};
    // vector<int>temp = {};
    // f22(0,arr,temp);
    // cout<<"all printed\n";

    int k = 10;
    vector<int>arr = {1,9,3,7,2,1};
    int s = 0;
    vector<int>res = {};
    f33(0,arr,res,k,s);

return 0;
}