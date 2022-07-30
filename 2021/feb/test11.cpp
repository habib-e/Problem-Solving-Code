// CPP program for minimum insertions to
// make a Co-prime Array.
#include <bits/stdc++.h>
using namespace std;

void printResult(int arr[], int n)
{
    // Counting adjacent pairs that are not
    // co-prime.
    int count = 0;
    for (int i = 1; i < n; i++)
        if (__gcd(arr[i], arr[i - 1]) != 1)
            count++;

    cout << count << endl; // No.of insertions
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++)
    {
        // If pair is not a co-prime insert 1.
        if (__gcd(arr[i], arr[i - 1]) != 1)
            cout << 1 << " ";
        cout << arr[i] << " ";
    }
}

// Driver Function
int main()
{
    int A[] = {2, 7, 28};
    int n = sizeof(A) / sizeof(A[0]);
    printResult(A, n);
    return 0;
}
