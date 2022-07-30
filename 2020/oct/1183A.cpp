#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i,t;
    cin>>t;
    while(t--)
    {
        string s,v;
        cin>>s;
        sort(s.begin(),s.end());
        v=s;
        reverse(v.begin(),v.end());
        cout<<(s==v?"-1":s)<<endl;
    }
    return 0;
}
