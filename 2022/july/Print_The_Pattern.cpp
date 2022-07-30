
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> v;
void precal()
{
    v.push_back("A");
    for (ll i = 1; i <= 15; i++)
    {
        string s = v[i - 1];
        s += (char(65 + i));
        s += v[i - 1];
        v.push_back(s);
    }
}
int main()
{
    precal();
    ll n;
    cin >> n;
    cout << v[n - 1];
    return 0;
}