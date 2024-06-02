#include <iostream>
using namespace std;
void bubbleSort(int *, int); // prototype

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];       // input array
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  // sorted array output
    }
    return 0 ;
}

void bubbleSort(int *arr, int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= n- i - 1; j++ )
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];   //swapping 
                arr[j + 1] = temp;
            }
        }
    }
}