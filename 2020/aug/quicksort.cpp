#include <bits/stdc++.h>
using namespace std;
void swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin>>t;
    int arr[t+1];
    for(int i=0;i<t;i++)
        cin>>arr[i];
    quickSort(arr, 0, t - 1);
    print(arr, t);
    return 0;
}
