#include <bits/stdc++.h>
#define ll long long
using namespace std;

void mergeArr(int arr[], int brr[], int n1, int n2)
{
    int m = 0, n = 0;
    while (m < n1 and n < n2)
    {
        if (brr[n] < arr[m])
            cout << brr[n++]<<" ";
        else
            cout << arr[m++]<<" ";
    }
    while (m < n1)
        cout << arr[m++]<<" ";
    while (n < n2)
        cout << brr[n++]<<" ";
}
int main()
{

    int n1, n2;
    cin >> n1 >> n2;
    int arr[n1], brr[n2];

    for (int i = 0; i < n1; i++)
        cin >> arr[i];

    for (int i = 0; i < n2; i++)
        cin >> brr[i];
    mergeArr(arr, brr, n1, n2);

    return 0;
}