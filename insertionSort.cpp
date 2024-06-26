#include <iostream>
using namespace std;
void insertionSort(int *, int);   //prototype

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)  // input array
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";   //  sorted array in output 
    }
    return 0;
}

void insertionSort(int * arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];      //inserting the element
            j--;
        }
        arr[j + 1] = current;
    }
}
