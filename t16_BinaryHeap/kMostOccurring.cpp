#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
Given an array arr[] of N integers in which elements may be repeating several times. Also, a positive number K is given and the task is to find sum of total frequencies of K most occurring elements
*/
int kMostFrequent(int arr[], int n, int k)
{
    // Your code here
    priority_queue<int> p;
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        ump[arr[i]]++;
    }

    for (auto it : ump)
    {
        p.push(it.second);
    }

    int s = 0;
    for (int i = 0; i < k; i++)
    {
        s += p.top();
        p.pop();
    }
    return s;
}
int main()
{

    return 0;
}