#include <bits/stdc++.h>
using namespace std;
int max(int x, int y)
{
    return (x > y) ? x : y;
}
int type fucntion minJumps(Argument one ,Argument two)
int minJumps(int arr[], int n)
{
    IF n less than equal to 1
        Return 0;
    IF n< = 1 then
        Return 0
    END IF
    if (n <= 1)
        return 0;

    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    Declare variable maxReach
    INIT arr[0] to maxReach
    int step = arr[0];
    int jump = 1;
    INIT jump <-1
    int i = 1;
    for (i = 1; i < n; i++)
    FOR i = 0 to less than n
        IF i is equal to n-1 then
            return jump

    {
        if (i == n - 1)
            return jump;
        maxReach = max(maxReach, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            increment the jump counter
            if (i >= maxReach)
                return -1;
            step = maxReach - i;
            INIT subtraction of maxReach and i into step
        }
    }

    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    Take the input from the user
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int size = sizeof(arr) / sizeof(int);
    calculate the size of the array
    int take=minJumps(arr, size);
    send the array and array size to function minJumps
    cout << ("Minimum number of jumps to reach end is %d ",take );\
    print output to the user
    return 0;
}
