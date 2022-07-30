#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n,i,j,m;
int main()
{
    string s;
    vector<string>v,w;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
        w.push_back(s);
    }
    int l=0,r=0,siz=0;
    string mid;
    string st[101],en[101];
    for(i=0; i<n; i++)
    {
        string is=v[i];
        reverse(is.begin(),is.end());
        if(v[i]==is)
            mid=is;
        else
        {
            for(j=0; j<w.size(); j++)
            {
                if(is==w[j])
                {
                    st[l++]=v[i];
                    en[r++]=is;
                    w[i]="";
                    w[j]="";
                    siz+=(2*m);
                    break;
                }
            }
        }
    }
    cout<<siz+mid.size()<<endl;
    for(i=0;i<l;i++)
    {
        cout<<st[i];
    }
    cout<<mid;
    for(i=r-1;i>=0;i--)
    {
        cout<<en[i];
    }
    cout<<endl;
    return 0;
}
