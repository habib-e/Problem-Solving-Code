#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h=1,m,x,y,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        cin>>m;
        cout<<"Case "<<h++<<":"<<endl;
        while(m--){
            cin>>x>>y;
            if((x>=a && x<=c) && (y>=b && y<=d))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}
