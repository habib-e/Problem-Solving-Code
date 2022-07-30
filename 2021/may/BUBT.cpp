#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        if(x&1){
            cout<<(x+1)/2<<endl;
        }
        else{
            cout<<x/2<<endl;
        }

    }
    return 0;
}
