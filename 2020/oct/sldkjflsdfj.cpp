#include<bits/stdc++.h>
using namespace std;

//var
int t,d,maxd=0;
string s;

int main(){
	cin >> t;
	while(t--){
		cin >> s;d=0;
		for(int i=0; i<s.length();i++){
			if(s[i]!='R')d++;
			else d=0;
			maxd = max(d,maxd);
		}
		cout << maxd+1 << endl;
		maxd=0;
	}
}
