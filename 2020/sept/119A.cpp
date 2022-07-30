#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return __gcd(a,b);
}
int main()
{

    int a,b,n;
    cin>>a>>b>>n;
    int f=0,g=0;
    while(n)
    {
        int x=gcd(a,n);
        n-=x;
        if(n<=0)
        {
            cout<<0<<endl;
            break;
        }

        int y=gcd(b,n);
        n-=y;
         if(n<=0)
        {
            cout<<1<<endl;
            break;
        }
    }

    return 0;
}
