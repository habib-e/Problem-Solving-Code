#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c0,c1,h,i,j,t;
    cin>>t;
    while(t--)
    {
        int zero=0,one=0;
        cin>>n>>c0>>c1>>h;
        string s="";
        cin>>s;
        sort(s.begin(),s.end());
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
                zero++;
        }
        one=n-zero;
        if(zero>one)
        {
            if(zero==n)
            {
                if(c0==c1)
                {
                    cout<<min((c0*zero)+(c1*one),n*c1)<<endl;
                }
                else if(c0>c1)
                {
                    cout<<min((c0*zero)+(c1*one),(n*c1)+(h*n))<<endl;
                }
                else if(c0<c1)
                {
                    cout<<min((c0*zero)+(c1*one),n*c0)<<endl;
                }
            }
            else
            {
                if(c0==c1)
                {
                    cout<<min((c0*zero)+(c1*one),n*c1)<<endl;
                }
                else if(c0>c1)
                {
                    cout<<min((c0*zero)+(c1*one),(one*h)+(n*c1))<<endl;
                }
                else if(c0<c1)
                {
                    cout<<min((c0*zero)+(c1*one),(one*h)+(n*c0))<<endl;
                }
            }
        }
        else if(zero<one)
        {
            if(one==n)
            {
                if(c0==c1)
                {
                    cout<<min((c0*zero)+(c1*one),n*c1)<<endl;
                }
                else if(c0>c1)
                {
                    cout<<min((c0*zero)+(c1*one),n*c1)<<endl;
                }
                else if(c0<c1)
                {
                    cout<<min((c0*zero)+(c1*one),(n*c0)+(h*n))<<endl;
                }
            }
            else
            {
                if(c0==c1)
                {
                    cout<<min((c0*zero)+(c1*one),n*c1)<<endl;
                }
                else if(c0>c1)
                {
                    cout<<min((c0*zero)+(c1*one),(zero*h)+(n*c1))<<endl;
                }
                else if(c0<c1)
                {
                    cout<<min((c0*zero)+(c1*one),(zero*h)+(n*c0))<<endl;
                }
            }
        }
    }
}
