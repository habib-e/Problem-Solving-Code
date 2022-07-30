#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        x+=y;
        x+=z;
        if(x>=2) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
