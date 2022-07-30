#include <bits/stdc++.h>
using namespace std;

// function to calculate sum of series
int calculateSum(int n)
{
    // initialize sum as 0
    int sum = 0;

    // loop to calculate sum of series
    for (int i = 1; i <= n; i++) {

        // calculate 2^i
        // and add it to sum

        sum = sum + (1 << i);
    }
    return sum;
}

// Driver code
int main()
{
    int n = 3;
    cout << "Sum of series of power of 2 is : "
         << calculateSum(n);
}
