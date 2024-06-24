#include <iostream>
using namespace std;
int linearSearch (int *, int, int);
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << linearSearch (arr, n, key);
    return 0;
}

int linearSearch (int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i; 
    return -1;
    
}