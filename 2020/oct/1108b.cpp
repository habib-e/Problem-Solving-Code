#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s,t;
    vector<string>S;
    map<string,int>chk;
    string a,b;
    for(cin>>n>>m; n--;)
    {
        cin>>s;
        chk[s]++;
        S.push_back(s);
    }
//    for(auto i : chk)
//    {
//        cout<<i.first<<" "<<i.second<<endl;
//
//    }
//     cout<<endl<<endl;
    for(auto s: S)
    {
        t=s;
        reverse(t.begin(),t.end());
        while((s!=t and chk[s] and chk[t]) or (s==t and chk[s]>1))
        {
            chk[s]--;
            chk[t]--;
            a+=s;
        }
        if(s==t and chk[s]) b=s;
    }
    cout<<2*a.size()+b.size()<<endl;
    cout<<a<<b;
    reverse(a.begin(),a.end());
    cout<<a<<endl;
    return 0;
}
