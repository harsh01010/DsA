#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// method one : using sorting -> we have to modify the given array
/* method two : using min heap

5
10
1 12 5 111 200

sum = 10 
res = 0

top of min heap -> 1

 since the top is smaller than sum 
 sum -= 1 => sum = 9 ,res++
pop()
top = 5
 since the top is smaller than sum
 sum -= 5 => sum = 4 , res++

pop()
top = 12

12 > 4  return res(2)




*/

int maxItems(int arr[], int n, int sum)
{
    priority_queue<int,vector<int>,greater<int>>p{arr,arr+n};
    int count = 0;
    while(!p.empty())
    {
        if(sum < p.top()) return count; 
        sum-=p.top();
        p.pop();
        count++;
        
    }
    return count;

}

int main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (auto &it : arr)
        cin >> it;

    int ans = maxItems(arr,n,sum);
    cout<<ans<<"\n";

    return 0;
}