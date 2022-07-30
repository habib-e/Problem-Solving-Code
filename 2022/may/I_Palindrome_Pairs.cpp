#include <bits/stdc++.h>
using namespace std;
map<long long, long long> f;
main()
{
    long long n, p;
    string s;
    cin >> n;
    while (n--)
    {
        long long a = 0;
        cin >> s;
        for (long long j = 0; j < s.size(); j++)
            a ^= 1 << (s[j] - 'a');
        for (long long j = 0; j < 26; j++)
            p += f[(1 << j) ^ a];
        p += f[a]++;
    }
    cout << p;
}