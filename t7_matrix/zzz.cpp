#include <stdio.h>

int hoarse(int arr[], int lo, int hi)
{
    int pivot = arr[lo];
    int i = lo - 1;
    int j = hi + 1;
    while (1)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void qsortt(int arr[], int lo, int hi)
{
    if (lo < hi)
    {
        int prt = hoarse(arr, lo, hi);
        qsortt(arr, lo, prt);
        qsortt(arr, prt + 1, hi);
    }
}

void unionn(void)
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    int arr[n1], brr[n2];
    printf("enter the elements of both the  arrays\n");

    for (int i = 0; i < n1; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    qsortt(arr, 0, n1 - 1), qsortt(brr, 0, n2 - 1);

    int k = 0, i = 0, j = 0, ans[n1 + n2];
    while (i < n1 and j < n2)

    {
        if (i > 0 and arr[i] <= brr[j] and arr[i] == arr[i - 1])
            i++;
        else if (j > 0 and brr[j] < arr[i] and brr[j] == brr[j - 1])
            j++;
        else if (arr[i] > brr[j])
            ans[k++] = brr[j++];
        else if (arr[i] < brr[j])
            ans[k++] = arr[i++];
        else if (arr[i] == brr[j])
            ans[k++] = arr[i++], j++;
    }
    while (i < n1)
    {
        if (i > 0 and arr[i] == arr[i - 1])
            i++;
        else
            ans[k++] = arr[i++];
    }
    while (j < n2)
    {
        if (j > 0 and brr[j] == brr[j - 1])
            j++;
        else
            ans[k++] = brr[j++];
    }
    printf("UNION:-\n:");
    for (int i = 0; i < k; i++)
        printf("%d ", ans[i]);
    printf("\n");
}

void intersect(void)
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    int arr[n1], brr[n2];

    printf("enter the elements of  the array\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    qsortt(arr, 0, n1 - 1);
    qsortt(brr, 0, n2 - 1);

    int inter[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 and j < n2)
    {
        if (arr[i] < brr[j])
            i++;
        else if (arr[i] > brr[j])
            j++;
        else
            inter[k++] = arr[i++], j++;
    }
    if (k == 0)
        printf("null\n");
    else
    {
        for (int i = 0; i < k; i++)
            printf("%d ", inter[i]);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        // unionn();
        intersect();
    }

    return 0;
}