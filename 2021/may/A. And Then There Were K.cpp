#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<=30;i++){
            long long x = pow(2,i);
            long long y = pow(2,(i-1));
            if(n==1){
                cout<<0<<endl;
                break;
            }
            else if(n==2 || n==3){
                cout<<1<<endl;
                break;
            }
            else if(n>=y and n<x){
                cout<<y-1<<endl;
                break;
            }
        }
    }
}
