#include<bits/stdc++.h>
using namespace std;
int n,m,i,x,y;
vector<int>vx;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        vx.push_back(x);
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>y;
        vx.push_back(y);
    }
    sort(vx.begin(),vx.end());
    for(i=0;i<n;i++)
    {
        cout<<vx[i]<<" ";
    }
    cout<<endl;
    for(i=n;i<(n+m);i++)
    {
        cout<<vx[i]<<" ";
    }

}
