#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res =6-max(a,b)+1;
    if(res==4){
        cout<<"2/3";
    }
    else if(6%res==0){
        cout<<"1/"<<6/res;
    }
    else{
        cout<<res<<"/6";
    }
    return 0;
}