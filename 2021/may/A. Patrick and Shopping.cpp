#include<bits/stdc++.h>
using namespace std;
#define llu unsigned long long 
int main(){

    llu d1,d2,d3,a=0,b=0,c,d,l,r;
    cin>>d1>>d2>>d3;
    a=d1+d2+d3;
    if(d1<=d2){
        if(d2<=d3){
            l=d1,r=d2;
        }
        else{
            l=d1,r=d3;
        }
    }
    else{
        if(d1>=d3){
            l=d2,r=d3;
        }
        else{
            l=d1,r=d2;
        }
    }
    b=(l*2)+(r*2);
    cout<<min(a,b)<<endl;




    return 0;
}