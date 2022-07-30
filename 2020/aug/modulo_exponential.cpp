#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll power=13,base=2,p=3;
    //cin>>power>> base;
    ll res=1;
    while(power)//13,12
    {
        if(power%2==0){
            power/=2;
            base=(base*base)%p;
        }
        else{
            power--;
            res=(res*base)%p; //2%3=2,
        }

    }

    cout<<res;
    return 0;
}
