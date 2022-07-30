#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
void print_poly(int i, int n)
{
    if (i < n)
    {
        if (i == 0)
            printf("1");
        else
        {
            printf(" + x");
            if (i > 1)
                printf("^%d", i);
        }
        print_poly(i + 1, n);
    }
}

int32_t main()
{
    ll n;
    cin >> n;
    print_poly(0, n);

    return 0;
}