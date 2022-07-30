#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,res,rem,k,r;
    cin>>k>>r;
    for(i=1;i<=100;i++){
        res = (k*i);
        rem=res-r;
        if(rem%10==0||res%10==0){
            cout<<i;
            break;
        }
    }
}