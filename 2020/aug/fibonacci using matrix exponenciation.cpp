#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[3];
ll I[3][3],T[3][3];
void mul(ll A[3][3],ll B[3][3],int dim){
    ll res[dim+1][dim+1];
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            res[i][j]=0;
            for(int k=1;k<=dim;k++)
            {
                //res[i][j]+=A[i][k]*B[k][j];
                ll x = (A[i][k]*B[k][j])%1000000007;
                res[i][j]=(res[i][j]+x)%1000000007;
            }
        }
    }
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}
ll getfib(int n)
{
    if(n<=2) return  ar[n];
    I[1][1]=I[2][2]=1;
    I[1][2]=I[2][1]=0;
    T[1][1]=0;
    T[1][2]=T[2][1]=T[2][2]=1;
    n--;
    while(n){
        if(n%2){
            mul(I,T,2);
            n--;
        }
        else{
            mul(T,T,2);
            n/=2;
        }
    }
    ll fn=(ar[1]*I[1][1]+ar[2]*I[2][1])%1000000007;
    return fn;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>ar[1]>>ar[2]>>n;
        n++;
        cout<<getfib(n)<<endl;
    }
}
