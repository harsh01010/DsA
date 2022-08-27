#include <bits/stdc++.h>
#define ll long long
using namespace std;

void mergeArr(int arr[], int l, int h, int m)
{
    int aux1[m - l + 1], aux2[h - m];
    int p = 0, k = 0, q = 0;
    for (int i = 0; i <= m; i++)
        aux1[p++] = arr[k++];
    for (int i = m + 1; i < h; i++)
        aux2[q++] = arr[k++];
    q = 0, p = 0, k = 0;
    while (p < m - l + 1 and q < h - m)
    {
        if (aux1[p] < aux2[q])
            arr[k++] = aux1[p++];
        else
            arr[k++] = aux2[q++];
    }
    while (p < m - l + 1)

        arr[k++] = aux1[p++];

    while (q < h - m)

        arr[k++] = aux2[q++];
}

void mergeSort(int  arr[],int l,int h)
{
      
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;)
        cin >> arr[i++];
    int l = 0, h = n - 1;
    mergeSort(arr, l, h);
    for (auto it : arr)
        cout << it << " ";
    cout << "\n";

    return 0;
}