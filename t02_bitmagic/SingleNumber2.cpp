#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// single number 1 -> one sigle occuring , other even occuring.
//  single number 2 -> one occurs once , other thrice

/*
count the total no of ith bits in all numbers of array , if the count is not a multiple of 3 , set ith bit in the res(initially res = 0).
*/
/*
another method using two buckets
*/
int singleNumber(vector<int> &nums)
{
    int res = 0;
    for (int i = 0; i < 32; i++)
    { // i denotes the bit number,j denotes the element of array
        int iTh_cnt = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] & (1 << i))
                iTh_cnt++;
        }
        if (iTh_cnt % 3)
            res |= (1 << i);
    }
    return res;
}
int main()
{

    return 0;
}