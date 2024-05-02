#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int> singleNumber(vector<int> &nums)
{
    long mask = 0;
    for (auto it : nums)
        mask ^= it;
    // now mask have xor of the two single occuring numbers
    // let's identify the right most set bit in the mask
    int temp = mask;
    mask &= (mask - 1); // if mask come out to be -2^31 then mask-1 overflows the interger , that's why mask is long type
    mask ^= temp;
    // now mask containg the first bit by which both the resulting numbers differ
    // create two buckets ,first bucket will contain one single occruing and other twice occuring,also bucket 2 will have the same
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] & mask)
            ans1 ^= nums[i];
        else
            ans2 ^= nums[i];
    }
    return {ans1, ans2};
}

int main()
{

    return 0;
}