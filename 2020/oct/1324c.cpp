#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0,mx=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') cnt++;
            else cnt=0;
            mx=max(mx,cnt);
        }
        cout<<mx+1<<endl;
    }
}
