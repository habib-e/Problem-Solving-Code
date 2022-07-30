#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,x,sum=0;
		cin>>n;
		vector<long>v;
		for(long i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			sum+=v[i];
		}
		if(sum%n==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;

	}


}