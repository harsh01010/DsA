#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;




// space optimized
 int countPartitions(int n, int d, vector<int>& arr) {
       int total = 0;
       for(auto it:arr)
        total += it;

        /*
        s1 - s2 = d
        s1 + s2 = k

        s2 = (d-k)/2
        s1 = (d+k)/2

        count any s1 or s2.
        */
        total -= d;
        if(total <0) return 0;
        if(total%2==1) return 0;
        total /= 2;
        
        // now the problem requires same logic as in count subsets with sum 'total'.
        vector<int>prev(total+1,0) , curr(total+1,0);
        prev[0] = curr[0] = 1;
        if(arr[0] <= total)
            prev[arr[0]]++; // if arr[0] = 0
        
        // if(arr[0] ==0 ) prev[0]+=1;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=total;j++)
            {
                int x = prev[j]%1000000007;
                int y= 0;
                if(arr[i] <= j)
                    y = prev[j-arr[i]]%1000000007;
                
                curr[j] = (x+y)%1000000007;
            }
            prev = curr;
        }
        
        return prev[total];
    }
int main()
{
    



return 0;
}