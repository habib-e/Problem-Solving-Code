/* ***Bismillahir Rahmanir Rahim*** */
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
#define ll long long 
ll ar[MAX];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    int t;
    cin>>t;
    while(t--){
    	ll n;

    	cin>>n;
    	ll d=0;
    	ll acarr[n];
    	ll acd=0;
    	for(ll i=0;i<n;i++){
    		cin>>ar[i];
    	}
    	int mx = INT_MIN;
    	sort(ar,ar+n);
    	do{
    		ll cnt=0;
    		++d;
    		for(int i=0;i<n;i++){
    			if(d*(ar[i])==ar[i+1]){
    				cnt++;
    			}
    		}
    		if(cnt>=mx){
    			for(int i=0;i<n;i++){
    				acarr[i]=ar[i];
    			}
    			acd=cnt;
    		}
    	}while(next_permutation(ar,ar+n));
    	cout<<acd<<endl;
    	for(int i=0;i<n;i++){
    		cout<<acarr[i]<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}
