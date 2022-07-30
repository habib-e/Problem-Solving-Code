#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int M = 0, C = 0,c,m;
    while (t--)
    {
        cin >> m >> c;
        if (m > c)
        {
            M++;
        }
        else if (c > m)
        {
            C++;
        }
    }
    if (M > C)
    {
        cout<<"Mishka";
    }
    else if (C > M)
    {
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}