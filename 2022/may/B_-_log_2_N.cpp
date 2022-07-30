#include <stdio.h>
#include <math.h>
long long pow1(long long base, long long x)
{
    long long ans = 1;
    for (long long i = 1; i <= x; i++)
        ans *= base;
    return ans;
}
int main()
{

    long long int M;
    int i, ans = 0;
    scanf("%lld", &M);
    for (i = 1; i <= 64; i++)
    {
        if (pow1(2, i) > M)
        {
            break;
        }
    }
    printf("%d\n", i - 1);

    return 0;
}