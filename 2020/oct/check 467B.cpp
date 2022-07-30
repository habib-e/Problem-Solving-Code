#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<string>
#include<set>
#include<sstream>
#include<vector>
#include<string.h>
#include<queue>
#include<list>
#include <iterator>
#include <functional>
#include<iomanip>
#define F first
#define S second
#define ll long long
using namespace std;
void fast_in_out() {
	std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);
}
ll arr[1001];
bool calc(ll n,ll k)
{
	ll c = 0;
	while (n)
	{
		if (n % 2)c++;
		n /= 2;
	}
	cout<<"c : "<<c<<endl;
	return c <= k;
}
int main() {
	fast_in_out();
	//cout << fixed << setprecision(6);
	ll n, m,k,ans=0;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
		cin >> arr[i];
	ll f; cin >> f;
	for (int i = 0; i < m; i++)
		if (calc(f^arr[i],k))ans++;
	cout << ans << endl;

	//system("pause");
	return 0;
}
