#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,r,g,b,w;
    cin>>t;
    while(t--)
    {
        int o=0;
        cin>>r>>g>>b>>w;
        if(r&1) o++;
        if(g&1) o++;
        if(b&1) o++;
        if(w&1) o++;
        if(o<2 || (o==3 &&r&&g&&b)||o==4) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

}
