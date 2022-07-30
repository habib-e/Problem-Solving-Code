#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt,n,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        cnt=0;
        int mn=0;
        int ss=s.size();
        for(i=0; i<ss; i++)
        {
            if(s[i]==')')
            {
                cnt--;


            }
            else if(s[i]=='(')
            {
                cnt++;
            }
            if(cnt<0)
            {
                mn=min(mn,cnt);
            }
        }
        cout<<mn*(-1)<<endl;
    }

}

