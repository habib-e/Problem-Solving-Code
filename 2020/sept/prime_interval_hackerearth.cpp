#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int maxn=1000000;
int is_prime[1000001];
void sieve(){

    for(int i=1;i<=maxn;i++) is_prime[i]=1;
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i*i<=maxn;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=maxn;j+=i){
                is_prime[j]=0;
            }
        }
    }
}
void check(){
    int cnt=0;
    for(int i=2;i<=maxn;i++){
        if(is_prime[i]) v.push_back(i);
    }
}
void print( int l,int r)
{
    for(int i=l;i<=r;i++)
        cout<<v[i]<<" ";
}
int main()
{
    int l,r;
    int t;
    cin>>t;
    while(t--){
    cin>>l>>r;
    sieve();
    check();
    print(l,r);
    }

    return 0;
}
