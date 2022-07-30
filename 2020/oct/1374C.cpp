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
        int ans=0;
        int ss=s.size();
        for(i=0;i<ss;i++)
        {
            if(s[i]==')')
            {
                cnt--;
                if(cnt<0)
                {
                    ans++;
                    cnt=0;
                }

            }
            else if(s[i]=='(')
            {
                cnt++;
            }
        }
        cout<<ans<<endl;
    }

}
