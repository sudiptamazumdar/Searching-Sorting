#include <iostream>
using namespace std;
void mergeSort(int *, int); // prototype
void merge(int *, int , int *, int , int *, int); // prototype

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // input array
    {
        cin >> arr[i];
    }
    mergeSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";   // sorted output array
    }
    return 0;
}

void mergeSort(int *arr, int n)
{
    if (n < 2)
        return;
    int mid = n / 2;
    int left[mid];
    int right[n - mid];
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        right[i - mid] = arr[i];
    }
    mergeSort(left, mid);       // recursive call
    mergeSort(right, n - mid);
    merge(left, mid, right, n - mid, arr, n); // merges the array in sorted form
}

void merge(int *left, int nL, int *right, int nR, int *arr, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < nL && j < nR)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < nL)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < nR)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}