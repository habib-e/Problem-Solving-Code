#include<bits/stdc++.h>
using namespace std;
int ans[100006],v[100006];
int j,i,buy,n,x;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    sort(v+1,v+n+1);
    for(i=2;i<=n;i+=2)
    {
        ans[i]=v[++j];
    }
    for(i=1;i<=n;i+=2)
    {
        ans[i]=v[++j];
    }
    for(i=2;i<n;i++)
    {
        if(ans[i-1]>ans[i] && ans[i+1]>ans[i])
        {
            buy++;
        }
    }
    cout<<buy<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
