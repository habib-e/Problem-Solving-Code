#include<bits/stdc++.h>
using namespace std;
int isp[1000001];
void sieve(){
    int mx = 1000000;
    for(int i = 2;i<=mx;i++)
        isp[i]=1;
    isp[0]=isp[1]=0;
    for(int i=2;i*i<=mx;i++){
        if(isp[i]){
            for(int j = i*i;j<=mx;j+=i)
                isp[j]=0;
        }
    }
}
void print(int s,int e){
    for(int i=s;i<=e;i++){
        cout<<i<<" = "<<isp[i]<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    sieve();
    while(t--){
        int s,e;
        cin>>s>>e;
        print(s,e);
        cout<<endl;
    }




}
