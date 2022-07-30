#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        ll ar[n];
        for(ll i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        ll ans =0;
        for(ll i=0;i<n;i++){
            if(ar[i]>=r){
                continue;
            }
            ll le = i+1;
            ll re = n-1;
            ll x=0;
            while(le<=re){
                ll mid = (le+re)/2;
                if(ar[mid]+ar[i]<l){
                    le=mid+1;
                }
                else{
                    x=mid;
                    re=mid-1;
                }
            }
            le = i+1,re = n-1;
            ll y = 0;
            while(le<=re){
                ll mid = (le+re)/2;
                if(ar[mid]+ar[i]>r){
                    re=mid - 1;
                }
                else{
                    y=mid;
                    le = mid+1;
                }
            }
            if(x!=0 and y!=0){
                ans+=y-x+1;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}
