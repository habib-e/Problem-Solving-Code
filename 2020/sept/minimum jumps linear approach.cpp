#include <bits/stdc++.h>
using namespace std;
int jumps(int A[], int n)
{
    if (n <= 1)
        return 0;
    int ladder = A[0]; //keep track of largest ladder that you have
    int stairs = A[0]; //keep track of stairs in the current ladder
    int jump = 1;
    for (int level = 1; level < n; level++)
    {
        if (level == n - 1)
            return jump;
        if (level + A[level] > ladder)
        {                              //if it is false then we ignore current A[level] because it's number of jumps is smaller
            ladder = level + A[level]; //build up the ladder // ladder=current index + current max(A[])
        }
        stairs--; //use up the stairs
        if (stairs == 0)
        {
            jump++;                  //no stairs left so now jump
            stairs = ladder - level; //now get new set of stairs. this new stairs helps to reach
                                     // the maximum current stairs.
            //overlapping subproblems like recursion does
            //here we ignore it by using line 12 and line 17
        }
    }
    return jump;
}
int main()
{
    /*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
    int n;
    int ar[]= {2, 3, 1, 1, 4};
    n = sizeof(ar)/sizeof(ar[0]);
    cout << jumps(ar, n)<<endl;
}
