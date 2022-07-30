#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll power=13,base=2;
    //cin>>power>> base;
    ll res=1;
    while(1)
    {
        if(power%2==0){
            power/=2;
            base=(base*base);
        }
        else{
            power--;
            res*=base;
        }
        if(power==0){
            cout<<res<<endl;
            break;
        }
    }
    cout<<res%3;

    return 0;
}
