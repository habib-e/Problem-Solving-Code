/* ***Bismillahir Rahmanir Rahim*** */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << 0 << endl;
	else
		cout << ++b - a << endl;
	return 0;
}
