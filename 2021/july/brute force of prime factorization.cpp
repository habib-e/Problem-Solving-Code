#include<bits/stdc++.h>
using namespace std;


void primefact(long long int n){
    for(long long int i=2;i<=n;i++){ //optimized approach
                                    //i*i<=n;
        if(n%i==0){
            long long int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
                cout<<i<<" ^ "<<cnt<<endl;
            }
        }
    }
}

int main(){
    long long int n;
    cin>>n;
    primefact(n);
    cout<<endl;

}

