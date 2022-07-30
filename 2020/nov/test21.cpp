#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        sta ring s;
        cin>>s;
        int si=s.size();
        bool f=true;
        int discon=0,fl=false,sum=0;
        int firstone=0,lastone=0,one=0,zero=0;
        for(i=0;i<si;i++)
        {
            if(s[i]=='1' && f)
            {
                firstone=i;
                f=false;
            }
            if(s[i]=='1')
            {
                lastone=i;
                one++;
            }
        }
        for(i=firstone;i<=lastone;i++)
        {
            if(s[i]=='0')
                zero++;
            if(s[i]=='0' && f)
            {
                fl=false;
                discon++;
            }
            else
            {
                fl=true;
                discon=0;
            }
            if(discon>=1) sum++;
        }
        int take=0,take1=0;
        take=one*a;
        take1=(zero*b)+a;
        if(take1<=take)
            cout<<take1<<endl;
        else if(sum){
            cout<<min(take,sum)<<endl;
        }
        else
            cout<<take<<endl;

    }
}
