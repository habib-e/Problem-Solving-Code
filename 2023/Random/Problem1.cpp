#include <bits/stdc++.h>
using namespace std;
void brutforce() //
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long countDifference = 5;
    long long count;
    long long mxCount = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] <= countDifference)
            {
                count++;
            }
        }
        mxCount = max(mxCount, count);
    }
    cout << mxCount << endl;
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
}
void binarySearch() // best solution
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long mxCount = INT_MIN;
    for (long long i = 0; i < n; i++)
    {
        long long j = upper_bound(a, a + n, a[i] + 5) - a; // upper_bound return the address of the first element greater than the given element
        mxCount = max(mxCount, j - i);                     // j - i is the count of the elements which are less than or equal to 5
    }
    cout << mxCount << endl;

    // Time Complexity: O(nlogn)
    // Space Complexity: O(1)
}
void slidingWindow() // best solution
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Time Complexity: O(n logn)
    // Space Complexity: O(1)
    sort(a, a + n);
    long long mxCount = INT_MIN;
    // code
    long long i = 0, j = 0;
    while (j < n)
    {
        if (a[j] - a[i] <= 5)
        {
            mxCount = max(mxCount, j - i + 1);
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << mxCount << endl;
    // Time Complexity: O(n logn)
    // Space Complexity: O(1)
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // brutforce();
    // binarySearch(); // best solution
    slidingWindow(); // best solution

    return 0;
}
