#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h=1;
    cin>>t;
    while(t--){
        int n,p,q,x,we=0,cnt=0;
        vector<int>v;
        cin>>n>>p>>q;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            we+=x;
            if(cnt<p and we<=q) cnt++;
        }
        cout<<"Case "<<h++<<": "<<cnt<<endl;
    }

    return 0;
}
