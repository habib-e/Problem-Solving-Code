#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    char s[1001];
    bool f=true;
    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        for(j=0; j<m; j++)
        {
            if(s[j]=='.')
            {
                if((i+j)%2==0)
                {
                    s[j]='W';
                }
                else
                {
                    s[j]='B';
                }
            }
        }
        cout<<s<<'\n';
    }



}
