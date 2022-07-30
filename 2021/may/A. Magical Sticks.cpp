#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else{
            cout<<(int)n/2+1<<endl;
        }
    }




    return 0;
}