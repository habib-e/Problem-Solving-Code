#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,r,b;
		cin >> n >> r >> b;
		string s = "";
		for(int i=0;i<=b;i++) {
			int xet = (r+i)/(b+1);
			for(int i=0;i<xet;i++) s+="R";
			if(i<b) s+="B";
		}
		cout << s << endl;
	}
}