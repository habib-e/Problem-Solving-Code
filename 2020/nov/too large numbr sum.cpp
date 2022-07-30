#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printResult(vector<ll> result)
{
    reverse(result.begin(), result.end());
    ll i = 0;
    while (i < result.size()) {
        cout << result[i];
        i++;
    }
}
void sumOfLargeNumbers(string v[], ll k, ll N)
{
    vector<vector<ll> > x(1000);
    for (ll i = 0; i < k; i++) {
        for (ll j = 0; j < N; j++) {
            x[i].push_back(v[i][j] - '0');
        }
    }
    ll carry = 0;
    vector<ll> result;
    for (ll i = N - 1; i >= 0; i--) {
        ll sum = 0;
        for (ll j = 0; j < k; j++)
            sum += x[j][i];
        sum += carry;
        ll temp = sum;
        ll count = 0;
        while (temp > 9) {
            temp = temp % 10;
            count++;
        }

        ll l = pow(10, count);
        if (l != 1)
            carry = (double)sum / l;
        sum = sum % 10;
        result.push_back(sum);
    }
    while (carry != 0) {
        ll a = carry % 10;
        result.push_back(a);
        carry = carry / 10;
    }
    printResult(result);
}
int main()
{
    ll n,siz;
    cin>>n;
    string arr[1000];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    siz=arr[0].size();
    sumOfLargeNumbers(arr, n, siz);
    return 0;
}
