#include <bits/stdc++.h>
using namespace std;
int jumps(int A[], int n)-- -----C5 = O(0);
{
    if (n <= 1)
        -----C6 = O(1);
    return 0;
    -----C7 = O(1);
    int ladder = A[0];
    ------C8 = O(1);
    int stairs = A[0];
    -----C9 = O(1);
    int jump = 1;
    -----C10 = O(1);
    for (int level = 1; level < n; level++)
        ------C11 = O(n);
    {
        if (level == n - 1)
            -----C12 = O(1);
        return jump;
        -----C13 = O(1);
        if (level + A[level] > ladder)
            -----C14 = O(n - 1);
        {
            ladder = level + A[level];
            ----C15 = O(n - 1);
        }
        stairs--;
        -----C16 = O(n - 1);
        if (stairs == 0)
            ------C17 = O(n - 1);
        {
            jump++;
            -----C18 = O(n - 1);
            stairs = ladder - level;
            -----C19 = O(n - 1);
        }
    }
    return jump;
    ----C20 = O(1);
}
int main()
{
    int n;
    ------C1 = O(0);
    int ar[] = {2, 3, 1, 1, 4};
    ----C2 = O(1);
    n = sizeof();
    ----C3 = O(1);
    cout << jumps(ar, n);
    -----C4 = O(1);
}

Now Calculating all cost with times : T(n) = C1 + C2 + C3 + C4 + C5 + C6 + C7 + C8 + C9 + C10 + C11 + C12 + C13 + C14 + C15 + C16 + C17 + C18 + C19 + C20 = 0 + 1 + 1 + 1 + 0 + 1 + 1 + 1 + 1 + 1 + (n) + 1 + 1 + (n - 1) + (n - 1) + (n - 1) + (n - 1) + (n - 1) + (n - 1) + 1 = n + 6(n - 1) + 11 = n + 6n - 6 + 11 = n + 6n + 5 we ignore constant with taking the upper_bound so the time complexity is O(n)