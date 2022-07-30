#include<bits/stdc++.h>
using namespace std;

int f(int a,int b)
{
    if(a==0||b==0)return 0;
    else if(a==1&&b==1)return 0;
    if(a>=b)
    {
        return 1 + f(a-2, b + 1);
    }
    else
    {
        return 1 + f(a + 1, b-2);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<f(a,b);
    return 0;
}
