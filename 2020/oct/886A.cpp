#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v(6);
	int sum = 0;
	for (int i = 0; i < 6; ++i) {
		cin >> v[i];
		sum += v[i];
	}
	for (int i = 0; i < 6; ++i) {
		for (int j = i + 1; j < 6; ++j) {
			for (int k = j + 1; k < 6; ++k) {
				if (((v[i] + v[j] + v[k]) * pow(2,1)) == sum){
                        //cout<<"v[i] + v[j] + v[k] :"<<v[i] + v[j] + v[k]<<endl;
    //cout<<"v[i] + v[j] + v[k] << 1:"<<((v[i] + v[j] + v[k]) << 1) <<endl;
                        //cout<<"sum :"<<sum<<endl;
					return cout << "YES\n", 0;
				}
			}
		}
	}
	cout << "NO\n";
}
