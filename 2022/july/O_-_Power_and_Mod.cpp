#include <iostream>
using namespace std;
unsigned __int128 m;
unsigned long long power(unsigned __int128 x, unsigned long long n)
{
    if (n == 0)
        return 0;
    if (n % 2 == 0)
        return power((x * x) % m, n / 2);
    else
        return (x * power(x, n - 1)) % m;
}
int main()
{
    unsigned t, x, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> x >> n >> s;
        m = 0;
        for (unsigned i = 0; i < s.size(); i++)
            m = m * 10 + s[i] - '0';
        cout << power(x, n) << '\n';
    }
    return 0;
}