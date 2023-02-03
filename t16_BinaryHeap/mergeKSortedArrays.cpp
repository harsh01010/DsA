#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
merge k sorted arrays

approach 1 -> simply copy all the elements in a array and sort -> t.c -> k*klog(k*k)
approach 2-> copy context of first array in an array and then merge other arrays into that using merge function of merge sort(two pointer).

approach 3->   using min heap
    element no. 0 1 2
    arr0      {{1,2,3},
    arr1      {4,5,6},
    arr2      {7,8,9}}

    create a min heap of a class or structure which has , array element , array number , element no.

    insert the first element of each array through created class or structure in the heap.

    now pop the top of the heap , hence it will give min(1,4,7) -> 1(minimum element).

    and insert the next element of the array no of poped element

    keep track of these poped element in an vector , at last we will get a sorted vector

t.c. -> O(nklogk)

*/

struct element
{
    int data;
    int elementNo;
    int arrNo;
    element(int x, int y, int z)
    {
        data = x;
        elementNo = y;
        arrNo = z;
    }
};
struct comp
{
    bool operator()(element a, element b)
    {
        return a.data > b.data;
    }
};

vector<int> mergeKSortedArray(vector<vector<int>> arr, int k)
{
    priority_queue<element, vector<element>, comp> pq;

    for (int i = 0; i < k; i++)
    {
        element e(arr[i][0], 0, i);
        pq.push(e);
    }

    vector<int> res;
    while (!pq.empty())
    {

        element e = pq.top();
        pq.pop();
        res.push_back(e.data);
        if (e.elementNo < k - 1)
        {
            e.elementNo++;
            e.data = arr[e.arrNo][e.elementNo];
            pq.push(e);
        }
    }

    return res;
}

int main()
{

    int k;
    cin >> k;
    vector<vector<int>> vec;
    for (int i = 0; i < k; i++)
    {
        vector<int> arr;
        cout << "enter the " << i + 1 << " array elements:\n";
        for (int i = 0; i < k; i++)
        {
            int e;
            cin >> e;
            arr.push_back(e);
        }
        vec.push_back(arr);
    }

    vector<int> res = mergeKSortedArray(vec, k);
    for (auto it : res)
        cout << it << " ";

    return 0;
}