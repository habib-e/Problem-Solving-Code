#include <bits/stdc++.h>
using namespace std;
int32_t main() // best solution
{
    long long n;
    cin >> n;

    long long pos_count = 0, neg_count = 0, zero_count = 0, res = 0, inp;

    for (long long i = 0; i < n; i++)
    {
        cin >> inp;

        if (inp == 0)
        {
            zero_count++;
            res++;
        }
        else
        {
            long long abs_inp = abs(inp);

            if (inp > 0)
            {
                pos_count++;
                res += abs_inp - 1;
            }
            else
            {
                neg_count++;
                res += abs_inp - 1;
            }
        }
    }

    if (zero_count > 0)
    {
        cout << res << endl;
    }
    else
    {
        long long additional_ops = (neg_count % 2 == 1) ? 2 : 0;
        cout << res + additional_ops << endl;
    }

    // Time Complexity: O(n)
    // Space Complexity: O(1)
    return 0;
}

/*
    The given code reads n integers and calculates the minimum cost to make all numbers zero, where a cost of one coin is needed to increase or decrease a number by one.
    For each number, the code checks if it is positive, negative, or zero, and calculates the minimum cost based on that.
    If there are zero numbers, the minimum cost is already obtained, otherwise, an additional cost of 2 coins is added if the count of negative numbers is odd, as we can make two negative numbers positive with one operation.
*/