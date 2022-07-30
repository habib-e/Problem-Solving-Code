#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double dl;
#define pb push_back
#define PB pop_back
#define nn "\n"
#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(p) memset(p, 0, sizeof(p))
#define precision(a) fixed << setprecision(a)
#define rep(i, b) for (ll i = 0; i < (b); i++)
#define rep1(i, b) for (int i = 1; i <= (b); i++)
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi acos(-1.0)
typedef map<string, ll> msl;
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
ll pow(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
// C++ program for linear search

void search(vector<int> arr, int search_Element)
{
    int left = 0;
    int length = arr.size();
    int position = -1;
    int right = length - 1;

    // Run loop from 0 to right
    for (left = 0; left <= right; left++, right--)
    {

        // If search_element is found with
        // left variable
        if (arr[left] == search_Element)
        {

            position = left;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << left + 1 << " Attempt";

            break;
        }

        // If search_element is found with
        // right variable
        if (arr[right] == search_Element)
        {
            position = right;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << length - right << " Attempt";

            break;
        }
    }

    // If element not found
    if (position == -1)
        cout << "Not found in Array with "
             << left << " Attempt";
}

// Driver code
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int search_element = 4;

    // Function call
    search(arr, search_element);
}

// This code is contributed by mayanktyagi1709
