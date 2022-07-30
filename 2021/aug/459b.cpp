#include<bits/stdc++.h>
using namespace std;
int n, m;
map<string, string> ans;
int main()
{
    cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		string a, b;
		cin>>a>>b;
		b+=";";
		ans[b]=a;
	}
	for(int i=1;i<=m;i++)
	{
		string a, b;
		cin>>a>>b;
		cout<<a<<" "<<b<<" #"<<ans[b]<<endl;
	}
    return 0;
}
