#include <iostream>
using namespace std;
void quickSort(int *, int, int) ;;
int partition(int*, int, int);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";    
    }
    return 0;
}

void quickSort (int *arr, int low, int high)
{
    if (low < high)
    {
        int PI = partition(arr,low,high);
        quickSort(arr,low,PI-1);
        quickSort(arr,PI + 1,high);
    }
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int PI = low - 1;
    for (int i = low; i < high; i++)
    {
        if (arr[i] < pivot)
            swap(arr[i], arr[++PI]);
    }
    swap(arr[high], arr[++PI]);
    return PI;
}
